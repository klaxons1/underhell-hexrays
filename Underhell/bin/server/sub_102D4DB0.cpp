int __thiscall sub_102D4DB0(float *this, float a2)
{
  int result; // eax
  int v4; // eax
  _BYTE *v5; // edi
  int *v6; // ecx
  int v7; // edi
  float v8; // eax
  float v9; // edx
  int v10; // eax
  float *v11; // edi
  int v12; // ecx
  int v13; // ebx
  int (__thiscall *v14)(float *, float *, _DWORD); // edx
  float *v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // ebx
  int v20; // eax
  int v21; // [esp+Ch] [ebp-B4h]
  float v22; // [esp+Ch] [ebp-B4h]
  float v23; // [esp+10h] [ebp-B0h]
  float v24; // [esp+14h] [ebp-ACh]
  float v25; // [esp+1Ch] [ebp-A4h]
  _BYTE v26[44]; // [esp+28h] [ebp-98h] BYREF
  float v27; // [esp+54h] [ebp-6Ch]
  int v28[8]; // [esp+7Ch] [ebp-44h] BYREF
  float v29; // [esp+9Ch] [ebp-24h]
  float v30; // [esp+A0h] [ebp-20h]
  float v31; // [esp+A4h] [ebp-1Ch]
  float v32[3]; // [esp+A8h] [ebp-18h] BYREF
  float v33; // [esp+B4h] [ebp-Ch] BYREF
  float v34; // [esp+B8h] [ebp-8h]
  float v35; // [esp+BCh] [ebp-4h]
  int savedregs; // [esp+C0h] [ebp+0h] BYREF

  result = LODWORD(a2);
  if ( (*(_BYTE *)(LODWORD(a2) + 356) & 0x28) == 0 )
  {
    v4 = *((_DWORD *)this + 537);
    if ( v4 )
    {
      v5 = (_BYTE *)(v4 + 832);
      if ( *(_BYTE *)(v4 + 832) )
      {
        if ( *(_BYTE *)(v4 + 84) )
        {
          *(_BYTE *)(v4 + 88) |= 1u;
        }
        else
        {
          v6 = *(int **)(v4 + 24);
          if ( v6 )
            sub_100194B0(v6, 832);
        }
        *v5 = 0;
      }
    }
    v7 = sub_10283270();
    if ( v7 )
    {
      if ( ((_DWORD)this[63] & 0x1000) != 0 )
        sub_100DAFD0((int)this);
      v33 = -this[119];
      v34 = -this[120];
      v35 = -this[121];
      off_10689714();
      sub_10422540(&v33, v32);
      sub_100E11A0(v7, v32);
      if ( ((_DWORD)this[63] & 0x800) != 0 )
        sub_100DAE60((int)this);
      sub_100E10C0(v7, this + 145);
      a2 = 8.0;
      sub_10284530((float *)(v7 + 804), &a2);
      a2 = 2.0;
      sub_1012A260((float *)(v7 + 808), &a2);
      sub_1005C620((_BYTE *)(v7 + 116), 0, 0, 0, 0);
      a2 = 32.0;
      sub_100C1ED0((float *)(v7 + 812), &a2);
      a2 = 64.0;
      sub_1012A2B0((float *)(v7 + 816), &a2);
      a2 = 32.0;
      sub_1012A300((float *)(v7 + 820), &a2);
      sub_100F5880((int *)v7, *(float *)(dword_106DE7E4 + 44));
    }
    if ( ((_DWORD)this[63] & 0x1000) != 0 )
      sub_100DAFD0((int)this);
    v8 = this[119];
    v9 = this[121];
    v30 = this[120];
    v29 = v8;
    v31 = v9;
    off_10689714();
    v10 = *((_DWORD *)this + 63) >> 11;
    v33 = v29 * 64.0;
    v34 = v30 * 64.0;
    v35 = 64.0 * v31;
    if ( (v10 & 1) != 0 )
      sub_100DAE60((int)this);
    v11 = this + 145;
    v12 = *((_DWORD *)this + 63) >> 11;
    v32[0] = this[145] + v33;
    v32[1] = this[146] + v34;
    v32[2] = this[147] + v35;
    if ( (v12 & 1) != 0 )
      sub_100DAE60((int)this);
    sub_1002A5F0((int)&savedregs, (int)this, this + 145, v32, 1174421507, (int)this, 0, (int)v26);
    if ( v27 < 1.0 )
      sub_10264E40((int)v26, (int)"BeerSplash");
    v13 = (*(int (__thiscall **)(float *, float *))(*(_DWORD *)this + 580))(this, v32);
    sub_10219BB0(v28);
    v28[0] = (int)&CPASFilter::`vftable';
    sub_1021A370(v28, v13);
    v14 = *(int (__thiscall **)(float *, float *, _DWORD))(*(_DWORD *)this + 580);
    v28[0] = (int)&CPASAttenuationFilter::`vftable';
    v15 = (float *)v14(this, v32, 0.80000001);
    sub_1021A0E0(v28, v15, v25);
    v21 = *((_DWORD *)this + 6);
    v16 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
    sub_1023C580((int)v11, (int)this, v28, v16, v21, (int)"GrenadeBugBait.Splat", 0.0, COERCE_INT(0.0));
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    v22 = *v11;
    v23 = this[146];
    v24 = this[147];
    v17 = sub_100F4030(this);
    if ( !sub_102D4A40(v17, v22, v23, v24, 0) )
    {
      v18 = *((_DWORD *)this + 63);
      v19 = *(_DWORD *)(dword_106DE79C + 48);
      a2 = *(float *)(dword_106DE7E4 + 44);
      if ( (v18 & 0x800) != 0 )
        sub_100DAE60((int)this);
      v20 = sub_100F4030(this);
      sub_1023D4B0(512, this + 145, v19, a2, v20, 0, 0);
    }
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    sub_102AD330(dword_106DBB00, this + 145);
    sub_1025FAC0((int)this);
    return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v28);
  }
  return result;
}

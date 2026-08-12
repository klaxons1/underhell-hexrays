int __thiscall sub_10381320(char *this, int a2)
{
  int v3; // edi
  int v4; // edi
  double v5; // st7
  int v6; // edi
  int v7; // ecx
  int v8; // edi
  int v9; // edi
  int (__thiscall *v10)(char *, float *, _DWORD); // edx
  float *v11; // eax
  const char *v12; // eax
  int v13; // eax
  int v14; // eax
  int *v15; // ecx
  float v17; // [esp+18h] [ebp-9Ch]
  float v18; // [esp+24h] [ebp-90h]
  int v19; // [esp+38h] [ebp-7Ch] BYREF
  const char *v20; // [esp+3Ch] [ebp-78h]
  float v21; // [esp+40h] [ebp-74h]
  int v22; // [esp+44h] [ebp-70h]
  int v23; // [esp+48h] [ebp-6Ch]
  int v24; // [esp+4Ch] [ebp-68h]
  int v25; // [esp+50h] [ebp-64h]
  float v26; // [esp+54h] [ebp-60h]
  int v27; // [esp+58h] [ebp-5Ch]
  __int16 v28; // [esp+5Ch] [ebp-58h]
  char v29; // [esp+5Eh] [ebp-56h]
  int v30; // [esp+60h] [ebp-54h]
  int v31[5]; // [esp+64h] [ebp-50h] BYREF
  __int16 v32; // [esp+78h] [ebp-3Ch]
  _DWORD v33[8]; // [esp+7Ch] [ebp-38h] BYREF
  float v34[3]; // [esp+9Ch] [ebp-18h] BYREF
  float v35[3]; // [esp+A8h] [ebp-Ch] BYREF
  float v36; // [esp+BCh] [ebp+8h]

  if ( *((_DWORD *)this + 913) )
  {
    v3 = *((_DWORD *)this + 6);
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    v4 = sub_10410AA0(*((_DWORD *)this + 906), *((_DWORD *)this + 908), this + 580, &flt_106F1CB4, v3);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 500))(v4, *((float *)this + 925));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 1176))(v4, *((float *)this + 926));
    sub_10411720(v4, *((float *)this + 912), *((char **)this + 913));
  }
  else
  {
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    sub_104222B0(this + 704, 0, 0, v35);
    v5 = *((float *)this + 912);
    v6 = *((_DWORD *)this + 6);
    v7 = *((_DWORD *)this + 63) >> 11;
    v34[0] = v35[0] * v5;
    v34[1] = v35[1] * v5;
    v34[2] = v5 * v35[2];
    if ( (v7 & 1) != 0 )
      sub_100DAE60((int)this);
    v8 = sub_1040F170(*((_DWORD *)this + 906), *((_DWORD *)this + 908), this + 580, &flt_106F1CB4, v6);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 96))(v8);
    sub_1040F080(*((float *)this + 923), *((float *)this + 924));
    v17 = (double)*((int *)this + 915) * 0.01;
    sub_1040F0D0(v17, *((float *)this + 916), *((float *)this + 917), *((float *)this + 918), *((float *)this + 919));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 500))(v8, *((float *)this + 925));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 1176))(v8, *((float *)this + 926));
    sub_104107C0((int)this, a2, (int)v34, *((float *)this + 914), *((float *)this + 138), *((_DWORD *)this + 909));
  }
  v9 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 580))(this);
  sub_10219BB0(v33);
  v33[0] = &CPASFilter::`vftable';
  sub_1021A370(v33, v9);
  v10 = *(int (__thiscall **)(char *, float *, _DWORD))(*(_DWORD *)this + 580);
  v33[0] = &CPASAttenuationFilter::`vftable';
  v11 = (float *)v10(this, v34, 0.30000001);
  sub_1021A0E0(v33, v11, COERCE_FLOAT(v34));
  v21 = 1.0;
  v32 = -1;
  v12 = (const char *)*((_DWORD *)this + 907);
  v26 = 0.0;
  v23 = 0;
  v24 = 100;
  v25 = 0;
  v27 = 0;
  v28 = 1;
  v29 = 0;
  v30 = -1;
  memset(v31, 0, sizeof(v31));
  v19 = 1;
  v20 = v12;
  if ( !v12 )
    v20 = String;
  v13 = *((_DWORD *)this + 6);
  v22 = 75;
  v14 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v13);
  sub_1023BE40(v33, v14, (int)&v19);
  if ( this[3640] )
  {
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 10, 15);
    v18 = (float)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4);
    sub_1025F3A0((int)(this + 580), v18, COERCE_FLOAT(20));
  }
  v36 = *(float *)(dword_106B31C8 + 12) + 3.0;
  if ( *((_DWORD *)this + 418) != LODWORD(v36) )
  {
    if ( this[84] )
    {
      this[88] |= 1u;
    }
    else
    {
      v15 = (int *)*((_DWORD *)this + 6);
      if ( v15 )
        sub_100194B0(v15, 1672);
    }
    *((float *)this + 418) = v36;
  }
  sub_102375F0(v31);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v33);
}

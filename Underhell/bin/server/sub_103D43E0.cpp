void __thiscall sub_103D43E0(int this)
{
  unsigned int v2; // eax
  int v3; // eax
  int v4; // eax
  int (__stdcall ***v5)(char); // ecx
  double v6; // st7
  float *v7; // eax
  int v8; // edx
  int *v9; // ecx
  int v10; // eax
  _DWORD *v11; // eax
  float v12; // [esp+44h] [ebp-D0h]
  int v13; // [esp+48h] [ebp-CCh]
  float v14; // [esp+4Ch] [ebp-C8h]
  float v15; // [esp+50h] [ebp-C4h]
  int v16; // [esp+54h] [ebp-C0h]
  float v17; // [esp+64h] [ebp-B0h]
  float v18; // [esp+68h] [ebp-ACh]
  float v19; // [esp+70h] [ebp-A4h]
  float v20; // [esp+84h] [ebp-90h]
  float v21; // [esp+88h] [ebp-8Ch]
  float v22[24]; // [esp+94h] [ebp-80h] BYREF
  _DWORD v23[8]; // [esp+F4h] [ebp-20h] BYREF

  if ( *(_BYTE *)(this + 306) )
  {
    if ( sub_101B4DB0() )
    {
      sub_103D3BC0(&dword_106B9EC0, this, (int)sub_103D43E0, 0);
    }
    else
    {
      v2 = *(_DWORD *)(this + 1168);
      if ( v2 != -1
        && off_1061BE18[4 * (*(_DWORD *)(this + 1168) & 0xFFF) + 2] == v2 >> 12
        && off_1061BE18[4 * (*(_DWORD *)(this + 1168) & 0xFFF) + 1] )
      {
        v3 = sub_100F8C20((_DWORD *)this);
        sub_103D3960(v3);
      }
      sub_10219BB0(v23);
      v23[0] = &CBroadcastRecipientFilter::`vftable';
      sub_1021A200((int)v23);
      if ( *(_BYTE *)(this + 1144) == 3 && (v4 = *(_DWORD *)(this + 1128)) != 0 && *(_DWORD *)(this + 1124) >= v4 )
      {
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        v5 = off_1065C5EC;
        v6 = 0.0;
        v19 = 0.0;
        v18 = 48.0;
        v17 = 0.25;
        v16 = dword_1067E550;
        v15 = 384.0;
        v14 = 128.0;
        v13 = this + 580;
      }
      else
      {
        v20 = 0.0;
        if ( *(_DWORD *)(dword_10698344 + 48) )
          sub_1023C380((_DWORD *)this, (int)"NPC_CombineBall_Episodic.Explosion", v20, 0);
        else
          sub_1023C380((_DWORD *)this, (int)"NPC_CombineBall.Explosion", v20, 0);
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        sub_10261B70((float *)(this + 580), 20.0, 150.0, 1.0, 1250.0, 0, 0);
        sub_1001F130(v22);
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        v22[0] = *(float *)(this + 580);
        v22[1] = *(float *)(this + 584);
        v22[2] = *(float *)(this + 588);
        sub_1028E890((int)"cball_explode", (int)v22);
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        ((void (__stdcall *)(_DWORD *, _DWORD, int, _DWORD, _DWORD, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, int, _DWORD, int))(*off_1065C5EC)[8])(
          v23,
          0.0,
          this + 580,
          *(float *)(this + 1180),
          1024.0,
          dword_1067E550,
          0,
          0,
          2,
          0.2,
          64.0,
          0,
          0.0,
          255,
          255,
          225,
          32,
          0,
          8);
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        v5 = off_1065C5EC;
        v6 = 0.0;
        v19 = 0.0;
        v18 = 64.0;
        v17 = 0.5;
        v16 = dword_1067E550;
        v15 = 1024.0;
        v14 = *(float *)(this + 1180);
        v13 = this + 580;
      }
      v12 = v6;
      ((void (__stdcall *)(_DWORD *, _DWORD, int, float, float, int, _DWORD, _DWORD, int, float, float, _DWORD, float, int, int, int, int, _DWORD, int))(*v5)[8])(
        v23,
        LODWORD(v12),
        v13,
        COERCE_FLOAT(LODWORD(v14)),
        COERCE_FLOAT(LODWORD(v15)),
        v16,
        0,
        0,
        2,
        COERCE_FLOAT(LODWORD(v17)),
        COERCE_FLOAT(LODWORD(v18)),
        0,
        COERCE_FLOAT(LODWORD(v19)),
        255,
        255,
        225,
        64,
        0,
        8);
      if ( *(_DWORD *)(dword_10698344 + 48) )
      {
        v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
        sub_1023D4B0(33554433, v7, 180, 0.25, this, 0, 0);
      }
      sub_100DD660(this, &flt_106F1CA8);
      sub_100E0970(this, v8, 0, 0);
      sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
      if ( *(_BYTE *)(this + 1176) )
      {
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
        }
        else
        {
          v9 = *(int **)(this + 24);
          if ( v9 )
            sub_100194B0(v9, 1176);
        }
        *(_BYTE *)(this + 1176) = 0;
      }
      if ( !*(_BYTE *)(this + 1141) && *(_DWORD *)(dword_10698344 + 48) && sub_10019B00((_DWORD *)this) )
      {
        v10 = sub_10019B00((_DWORD *)this);
        v11 = (_DWORD *)__RTDynamicCast(
                          v10,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                          (int)&CHL2_Player `RTTI Type Descriptor',
                          0);
        if ( v11 )
          sub_102DCF10(v11);
      }
      v21 = *(float *)(dword_106B31C8 + 12) + 0.5;
      sub_100EC3F0((_DWORD *)this, (int)sub_10246D70, v21, off_1067E568);
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 408))(this);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v23);
    }
  }
}

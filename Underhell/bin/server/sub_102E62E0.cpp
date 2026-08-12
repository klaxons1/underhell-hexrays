int __thiscall sub_102E62E0(int this)
{
  int v2; // ebx
  unsigned int v3; // eax
  int v4; // edi
  int v6; // ebx
  int v7; // ecx
  unsigned int v8; // eax
  int *v9; // ecx
  double (__thiscall *v10)(int, _DWORD, _DWORD); // edx
  int v11; // ebx
  float *v12; // eax
  int v13; // eax
  int v14; // eax
  float v15; // [esp+8h] [ebp-68h]
  int v16; // [esp+14h] [ebp-5Ch]
  __int64 v17; // [esp+18h] [ebp-58h]
  __int64 v18; // [esp+18h] [ebp-58h]
  float v19; // [esp+1Ch] [ebp-54h]
  float v20; // [esp+1Ch] [ebp-54h]
  int v21; // [esp+20h] [ebp-50h]
  int v22; // [esp+20h] [ebp-50h]
  float v23; // [esp+24h] [ebp-4Ch]
  int v24[8]; // [esp+30h] [ebp-40h] BYREF
  _BYTE v25[12]; // [esp+50h] [ebp-20h] BYREF
  int v26[3]; // [esp+5Ch] [ebp-14h] BYREF
  float v27; // [esp+68h] [ebp-8h]
  int i; // [esp+6Ch] [ebp-4h]

  v2 = 0;
  v27 = *(float *)(this + 1176);
  if ( SLODWORD(v27) <= 0 )
  {
LABEL_10:
    v19 = *(float *)(dword_106B31C8 + 12) + 0.1;
    return sub_100EC3F0((_DWORD *)this, (int)sub_102E62E0, v19, off_106677D8);
  }
  else
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(*(_DWORD *)(this + 1164) + 4 * v2);
      if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 1164) + 4 * v2) & 0xFFF) + 2] != v3 >> 12 )
        v4 = 0;
      else
        v4 = off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 1164) + 4 * v2) & 0xFFF) + 1];
      sub_102E5D50((_DWORD *)this, (float *)v26, v4);
      if ( *(const char **)(v4 + 92) != "weapon_physcannon" && !sub_100D6240((_DWORD *)v4, "weapon_physcannon") )
        break;
      if ( SLODWORD(v27) <= 1 )
      {
        v6 = 0;
        for ( i = 0; i < *(_DWORD *)(this + 1196); ++i )
        {
          v7 = *(_DWORD *)(this + 1184);
          v8 = *(_DWORD *)(v7 + 4 * i);
          if ( v8 != -1 )
          {
            v9 = &off_1061BE18[4 * (*(_DWORD *)(v7 + 4 * i) & 0xFFF) + 1];
            if ( v9[1] == v8 >> 12 )
              v6 = *v9;
          }
          if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
            sub_100DAE60(v6);
          sub_102E5B60((_DWORD *)this, v6 + 580, (_DWORD *)v4, 4.0);
          v6 = 0;
        }
        sub_103FEA80(v4);
        HIDWORD(v17) = this;
        LODWORD(v17) = this;
        sub_1010DD80((_DWORD *)(this + 1140), v17, 0.0);
        sub_1023C380((_DWORD *)this, (int)"WeaponDissolve.Beam", 0.0, 0);
        *(_DWORD *)(this + 1176) = 0;
        if ( *(int *)(this + 1172) >= 0 )
        {
          if ( *(_DWORD *)(this + 1164) )
          {
            (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 1164));
            *(_DWORD *)(this + 1164) = 0;
          }
          *(_DWORD *)(this + 1168) = 0;
        }
        *(_DWORD *)(this + 1180) = *(_DWORD *)(this + 1164);
        *(_DWORD *)(this + 1196) = 0;
        if ( *(int *)(this + 1192) >= 0 )
        {
          if ( *(_DWORD *)(this + 1184) )
          {
            (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 1184));
            *(_DWORD *)(this + 1184) = 0;
          }
          *(_DWORD *)(this + 1188) = 0;
        }
        v21 = off_106677D8;
        *(_DWORD *)(this + 1200) = *(_DWORD *)(this + 1184);
        return sub_100EC3F0((_DWORD *)this, 0, 0.0, v21);
      }
      if ( ++v2 >= SLODWORD(v27) )
        goto LABEL_10;
    }
    v10 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
    i = v2;
    v27 = v10(dword_106B31E4, 2.5, 4.0);
    sub_102E5B60((_DWORD *)this, (int)v26, (_DWORD *)v4, v27);
    v15 = 3.0 - v27 + *(float *)(dword_106B31C8 + 12);
    sub_100C3210((float *)v4, 0, v15, 0, 0, SLODWORD(flt_106F1CA8), SLODWORD(flt_106F1CAC), SLODWORD(flt_106F1CB0), 0);
    HIDWORD(v18) = this;
    LODWORD(v18) = this;
    sub_1010DD80((_DWORD *)(this + 1116), v18, 0.0);
    v11 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 580))(v4, v25);
    sub_10219BB0(v24);
    v24[0] = (int)&CPASFilter::`vftable';
    sub_1021A370(v24, v11);
    v24[0] = (int)&CPASAttenuationFilter::`vftable';
    v12 = (float *)(*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v4 + 580))(v4, v25, 0.80000001);
    sub_1021A0E0(v24, v12, v23);
    v16 = *(_DWORD *)(v4 + 24);
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
    sub_1023C580(v16, this, v24, v13, v16, (int)"WeaponDissolve.Dissolve", 0.0, COERCE_INT(0.0));
    sub_1023C380((_DWORD *)this, (int)"WeaponDissolve.Beam", 0.0, 0);
    if ( *(_DWORD *)(this + 1176) - i - 1 > 0 )
      memcpy(
        (void *)(*(_DWORD *)(this + 1164) + 4 * i),
        (const void *)(*(_DWORD *)(this + 1164) + 4 * i + 4),
        4 * (*(_DWORD *)(this + 1176) - i - 1));
    v14 = off_106677D8;
    --*(_DWORD *)(this + 1176);
    v22 = v14;
    v20 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            0.5,
            1.5)
        + *(float *)(dword_106B31C8 + 12);
    sub_100EC3F0((_DWORD *)this, (int)sub_102E62E0, v20, v22);
    return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v24);
  }
}

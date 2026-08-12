void __cdecl sub_10128C30(int a1, int a2)
{
  int v2; // edx
  int v3; // ebx
  _DWORD *v4; // edi
  int v5; // ecx
  int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  int v10; // edi
  float v11; // eax
  float v12; // ecx
  float v13; // eax
  float v14; // ecx
  float v15; // eax
  float v16; // ecx
  double v17; // st7
  bool v18; // c0
  bool v19; // c3
  double v20; // st7
  float v21; // esi
  float v22; // edi
  float v23; // ebx
  float v24; // [esp+18h] [ebp-14h] BYREF
  float v25; // [esp+1Ch] [ebp-10h]
  float v26; // [esp+20h] [ebp-Ch]
  int v27; // [esp+24h] [ebp-8h]
  int v28; // [esp+28h] [ebp-4h]
  int v29; // [esp+38h] [ebp+Ch]

  v2 = a2;
  v3 = 0;
  if ( a2 )
  {
    v4 = off_103DCD74;
    if ( dword_103E69B0 == -1
      || *((_DWORD *)off_103DCD74 + 4 * (dword_103E69B0 & 0xFFF) + 2) != (unsigned int)dword_103E69B0 >> 12 )
    {
      v5 = 0;
    }
    else
    {
      v5 = *((_DWORD *)off_103DCD74 + 4 * (dword_103E69B0 & 0xFFF) + 1);
    }
    if ( a2 != v5 )
    {
      if ( dword_103E69B0 != -1
        && *((_DWORD *)off_103DCD74 + 4 * (dword_103E69B0 & 0xFFF) + 2) == (unsigned int)dword_103E69B0 >> 12
        && *((_DWORD *)off_103DCD74 + 4 * (dword_103E69B0 & 0xFFF) + 1) )
      {
        sub_10128B50();
        v4 = off_103DCD74;
      }
      v6 = *(_DWORD *)(a1 + 64);
      v28 = *(_DWORD *)(a1 + 68);
      v7 = *(_DWORD *)(a1 + 48);
      v27 = v6;
      if ( v7 == -1 || v4[4 * (v7 & 0xFFF) + 2] != v7 >> 12 )
        v29 = 0;
      else
        v29 = v4[4 * (v7 & 0xFFF) + 1];
      v8 = *(_DWORD *)(a1 + 44);
      if ( v8 != -1 && v4[4 * (*(_DWORD *)(a1 + 44) & 0xFFF) + 2] == v8 >> 12 )
        v3 = v4[4 * (*(_DWORD *)(a1 + 44) & 0xFFF) + 1];
      v9 = *(_DWORD *)(a1 + 40);
      if ( v9 == -1 || v4[4 * (*(_DWORD *)(a1 + 40) & 0xFFF) + 2] != v9 >> 12 )
        v10 = 0;
      else
        v10 = v4[4 * (*(_DWORD *)(a1 + 40) & 0xFFF) + 1];
      dword_103E69B0 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
      sub_10128A80((float *)&byte_103E6960, v10, v3, v29, &flt_10459240, &flt_10459240, &flt_10459240, 0.0, v27, v28);
    }
    dword_103E69A0 |= *(_DWORD *)(a1 + 64);
    flt_103E6994 = *(float *)(a1 + 52) + flt_103E6994;
    v11 = *(float *)(a1 + 8);
    v12 = *(float *)(a1 + 12);
    v24 = *(float *)(a1 + 4);
    v25 = v11;
    v26 = v12;
    flt_103E6964 = v24 + flt_103E6964;
    flt_103E6968 = v11 + flt_103E6968;
    flt_103E696C = v12 + flt_103E696C;
    v13 = *(float *)(a1 + 20);
    v14 = *(float *)(a1 + 24);
    v24 = *(float *)(a1 + 16);
    flt_103E6970 = v24;
    v25 = v13;
    v26 = v14;
    flt_103E6974 = v13;
    flt_103E6978 = v14;
    v15 = *(float *)(a1 + 32);
    v16 = *(float *)(a1 + 36);
    v24 = *(float *)(a1 + 28);
    flt_103E697C = v24;
    v25 = v15;
    v26 = v16;
    flt_103E6980 = v15;
    flt_103E6984 = v16;
    v17 = *(float *)(a1 + 52);
    v18 = flt_103E6998 < v17;
    v19 = flt_103E6998 == v17;
    v20 = flt_103E6998;
    if ( v18 || v19 )
      v20 = *(float *)(a1 + 52);
    flt_103E6998 = v20;
    dword_103E69AC = *(_DWORD *)(a1 + 76);
    if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10412D50 + 76))(
            dword_10412D50,
            *(_DWORD *)(a1 + 64)) )
    {
      if ( dword_103E69A0 )
      {
        v21 = flt_103E6964;
        v22 = flt_103E6968;
        v23 = flt_103E696C;
        v24 = flt_103E6964;
        v25 = flt_103E6968;
        v26 = flt_103E696C;
        if ( sub_1000E3F0(&v24, &flt_10459240)
          || (v25 = flt_103E6974, v24 = flt_103E6970, v26 = flt_103E6978, sub_1000E3F0(&v24, &flt_10459240)) )
        {
          if ( ++dword_10438200 < 10 )
          {
            v24 = v21;
            v25 = v22;
            v26 = v23;
            if ( sub_1000E3F0(&v24, &flt_10459240) )
              Warning("AddMultiDamage:  g_MultiDamage.GetDamageForce() == vec3_origin\n");
            v25 = flt_103E6974;
            v24 = flt_103E6970;
            v26 = flt_103E6978;
            if ( sub_1000E3F0(&v24, &flt_10459240) )
              Warning("AddMultiDamage:  g_MultiDamage.GetDamagePosition() == vec3_origin\n");
          }
        }
      }
    }
  }
}

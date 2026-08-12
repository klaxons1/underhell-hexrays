void __cdecl sub_102482C0(int a1, int a2)
{
  int v2; // edi
  int v3; // eax
  int v4; // edx
  unsigned int v5; // eax
  unsigned int v6; // eax
  int v7; // ebx
  unsigned int v8; // eax
  float v9; // ecx
  float v10; // edx
  float v11; // ecx
  float v12; // edx
  float v13; // ecx
  float v14; // edx
  double v15; // st7
  bool v16; // c0
  bool v17; // c3
  double v18; // st7
  float v19; // esi
  float v20; // edi
  float v21; // ebx
  float v22; // [esp+18h] [ebp-18h] BYREF
  float v23; // [esp+1Ch] [ebp-14h]
  float v24; // [esp+20h] [ebp-10h]
  int v25; // [esp+24h] [ebp-Ch]
  int v26; // [esp+28h] [ebp-8h]
  int v27; // [esp+2Ch] [ebp-4h]

  v2 = 0;
  if ( a2 )
  {
    if ( dword_1064EDD0 == -1 || off_1061BE18[4 * (dword_1064EDD0 & 0xFFF) + 2] != (unsigned int)dword_1064EDD0 >> 12 )
      v3 = 0;
    else
      v3 = off_1061BE18[4 * (dword_1064EDD0 & 0xFFF) + 1];
    if ( a2 != v3 )
    {
      sub_10248230();
      v4 = *(_DWORD *)(a1 + 68);
      v25 = *(_DWORD *)(a1 + 64);
      v5 = *(_DWORD *)(a1 + 48);
      v26 = v4;
      if ( v5 == -1 || off_1061BE18[4 * (v5 & 0xFFF) + 2] != v5 >> 12 )
        v27 = 0;
      else
        v27 = off_1061BE18[4 * (v5 & 0xFFF) + 1];
      v6 = *(_DWORD *)(a1 + 44);
      if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 44) & 0xFFF) + 2] != v6 >> 12 )
        v7 = 0;
      else
        v7 = off_1061BE18[4 * (*(_DWORD *)(a1 + 44) & 0xFFF) + 1];
      v8 = *(_DWORD *)(a1 + 40);
      if ( v8 != -1 && off_1061BE18[4 * (*(_DWORD *)(a1 + 40) & 0xFFF) + 2] == v8 >> 12 )
        v2 = off_1061BE18[4 * (*(_DWORD *)(a1 + 40) & 0xFFF) + 1];
      dword_1064EDD0 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
      sub_10247DF0((float *)&byte_1064ED80, v2, v7, v27, &flt_106F1CA8, &flt_106F1CA8, &flt_106F1CA8, 0.0, v25, v26);
    }
    dword_1064EDC0 |= *(_DWORD *)(a1 + 64);
    flt_1064EDB4 = flt_1064EDB4 + *(float *)(a1 + 52);
    v9 = *(float *)(a1 + 8);
    v10 = *(float *)(a1 + 12);
    v22 = *(float *)(a1 + 4);
    v23 = v9;
    v24 = v10;
    flt_1064ED84 = v22 + flt_1064ED84;
    flt_1064ED88 = v9 + flt_1064ED88;
    flt_1064ED8C = v10 + flt_1064ED8C;
    v11 = *(float *)(a1 + 20);
    v12 = *(float *)(a1 + 24);
    v22 = *(float *)(a1 + 16);
    flt_1064ED90 = v22;
    v23 = v11;
    v24 = v12;
    flt_1064ED94 = v11;
    flt_1064ED98 = v12;
    v13 = *(float *)(a1 + 32);
    v14 = *(float *)(a1 + 36);
    v22 = *(float *)(a1 + 28);
    flt_1064ED9C = v22;
    v23 = v13;
    v24 = v14;
    flt_1064EDA0 = v13;
    flt_1064EDA4 = v14;
    v15 = *(float *)(a1 + 52);
    v16 = flt_1064EDB8 < v15;
    v17 = flt_1064EDB8 == v15;
    v18 = flt_1064EDB8;
    if ( v16 || v17 )
      v18 = *(float *)(a1 + 52);
    flt_1064EDB8 = v18;
    dword_1064EDCC = *(_DWORD *)(a1 + 76);
    if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B3CDC + 76))(
            dword_106B3CDC,
            *(_DWORD *)(a1 + 64)) )
    {
      if ( dword_1064EDC0 )
      {
        v19 = flt_1064ED84;
        v20 = flt_1064ED88;
        v21 = flt_1064ED8C;
        v22 = flt_1064ED84;
        v23 = flt_1064ED88;
        v24 = flt_1064ED8C;
        if ( sub_10018CD0(&v22, &flt_106F1CA8)
          || (v22 = flt_1064ED90, v23 = flt_1064ED94, v24 = flt_1064ED98, sub_10018CD0(&v22, &flt_106F1CA8)) )
        {
          if ( ++dword_106C6238 < 10 )
          {
            v22 = v19;
            v23 = v20;
            v24 = v21;
            if ( sub_10018CD0(&v22, &flt_106F1CA8) )
              Warning("AddMultiDamage:  g_MultiDamage.GetDamageForce() == vec3_origin\n");
            v22 = flt_1064ED90;
            v23 = flt_1064ED94;
            v24 = flt_1064ED98;
            if ( sub_10018CD0(&v22, &flt_106F1CA8) )
              Warning("AddMultiDamage:  g_MultiDamage.GetDamagePosition() == vec3_origin\n");
          }
        }
      }
    }
  }
}

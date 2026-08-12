void __thiscall sub_101980F0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  float *v6; // eax
  unsigned int v7; // eax
  int v8; // ecx
  float *v9; // eax
  double v10; // st7
  float *v11; // edi
  double v12; // st7
  double v13; // st6
  double v14; // st7
  double v15; // st6
  int v16; // eax
  double v17; // rt0
  float v18; // [esp+8h] [ebp-14h]

  v2 = *(_DWORD *)(this + 1320);
  if ( v2 != -1 )
  {
    v3 = (int *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(this + 1320) & 0xFFF) + 4);
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 36))(v5);
        *(float *)(this + 1212) = *v6;
        *(float *)(this + 1216) = v6[1];
        *(float *)(this + 1220) = v6[2];
        v7 = *(_DWORD *)(this + 1320);
        if ( v7 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1320) & 0xFFF) + 2) != v7 >> 12 )
          v8 = 0;
        else
          v8 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1320) & 0xFFF) + 1);
        v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 40))(v8);
        *(float *)(this + 1224) = *v9;
        *(float *)(this + 1228) = v9[1];
        *(float *)(this + 1232) = v9[2];
      }
    }
  }
  if ( *((float *)off_103DC81C + 3) <= (double)*(float *)(this + 1196) )
  {
    v10 = *(float *)(this + 1200);
    sub_101B9650(
      *(float *)(this + 1200),
      *(float *)(this + 1196),
      *(_DWORD *)(this + 1192),
      *(_DWORD *)(this + 1180),
      *(_BYTE *)(this + 1204));
    *(float *)(this + 1236) = v10;
  }
  v11 = (float *)off_103DC81C;
  v18 = *(float *)(this + 1344) + *(float *)(this + 1348);
  *(float *)(this + 1272) = sub_100260E0(
                              *((float *)off_103DC81C + 3),
                              *(float *)(this + 1348),
                              v18,
                              *(float *)(this + 1352),
                              *(float *)(this + 1336));
  v12 = 0.0;
  v13 = 1.0;
  if ( 0.0 != *(float *)(this + 1308) - *(float *)(this + 1312)
    && (v11[3] - *(float *)(this + 1312)) / (*(float *)(this + 1308) - *(float *)(this + 1312)) <= 1.0 )
  {
    if ( (v11[3] - *(float *)(this + 1312)) / (*(float *)(this + 1308) - *(float *)(this + 1312)) >= 0.0 )
    {
      v14 = 1.0;
      v15 = (v11[3] - *(float *)(this + 1312)) / (*(float *)(this + 1308) - *(float *)(this + 1312));
      if ( v15 >= 1.0 )
        goto LABEL_18;
      v17 = v15;
      v13 = 1.0;
      v12 = v17;
    }
    if ( *(_DWORD *)(this + 1252) == 2 )
    {
      *(float *)(*(_DWORD *)(this + 1240) + 4) = v13 - v12;
      *(float *)(*(_DWORD *)(this + 1240) + 12) = v12;
      return;
    }
    v16 = *(_DWORD *)(this + 1240);
    v14 = v13 - v12;
    goto LABEL_27;
  }
  v14 = 1.0;
LABEL_18:
  v16 = *(_DWORD *)(this + 1240);
  if ( *(_DWORD *)(this + 1252) != 2 )
  {
LABEL_27:
    *(float *)(v16 + 4) = v14;
    return;
  }
  *(_DWORD *)v16 = *(_DWORD *)(v16 + 8);
  *(float *)(*(_DWORD *)(this + 1240) + 4) = v14;
  if ( *(_DWORD *)(this + 1252) - 2 > 0 )
    memcpy(
      (void *)(*(_DWORD *)(this + 1240) + 8),
      (const void *)(*(_DWORD *)(this + 1240) + 16),
      8 * (*(_DWORD *)(this + 1252) - 2));
  --*(_DWORD *)(this + 1252);
}

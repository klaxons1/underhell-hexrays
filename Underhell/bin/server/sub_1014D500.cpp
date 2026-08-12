int __thiscall sub_1014D500(int this, int *a2)
{
  float v3; // ecx
  float v4; // edx
  unsigned int v5; // edi
  int v7; // esi
  float *v8; // eax
  unsigned int v9; // eax
  float v10; // edx
  float v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  int v14; // [esp+8h] [ebp-Ch] BYREF
  float v15; // [esp+Ch] [ebp-8h]
  float v16; // [esp+10h] [ebp-4h]

  if ( !*(_BYTE *)(this + 1016) && a2[16] == 1 )
  {
    v3 = *((float *)a2 + 2);
    v4 = *((float *)a2 + 3);
    v5 = a2[11];
    v14 = a2[1];
    v15 = v3;
    v16 = v4;
    if ( v5 != -1 && off_1061BE18[4 * (v5 & 0xFFF) + 2] == v5 >> 12 )
    {
      sub_1014C960((char *)this, off_1061BE18[4 * (v5 & 0xFFF) + 1], (float *)&v14);
      return 0;
    }
    goto LABEL_6;
  }
  if ( *(_DWORD *)(this + 1020) )
    return 0;
  if ( (a2[16] & 0x40) == 0 )
  {
    if ( (a2[16] & 4) != 0 )
    {
      v10 = *((float *)a2 + 2);
      v11 = *((float *)a2 + 3);
      v12 = a2[11];
      v14 = a2[1];
      v15 = v10;
      v16 = v11;
      if ( v12 == -1 || off_1061BE18[4 * (v12 & 0xFFF) + 2] != v12 >> 12 )
        v13 = 0;
      else
        v13 = off_1061BE18[4 * (v12 & 0xFFF) + 1];
      sub_1014C960((char *)this, v13, (float *)&v14);
    }
    return 0;
  }
  if ( a2[10] == -1 || off_1061BE18[4 * (a2[10] & 0xFFF) + 2] != (unsigned int)a2[10] >> 12 )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * (a2[10] & 0xFFF) + 1];
  if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
    sub_100DAE60(v7);
  v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
  *(float *)&v14 = *(float *)(v7 + 580) - *v8;
  v15 = *(float *)(v7 + 584) - v8[1];
  v16 = *(float *)(v7 + 588) - v8[2];
  off_10689714();
  v9 = a2[11];
  if ( v9 == -1 || off_1061BE18[4 * (a2[11] & 0xFFF) + 2] != v9 >> 12 )
  {
LABEL_6:
    sub_1014C960((char *)this, 0, (float *)&v14);
    return 0;
  }
  sub_1014C960((char *)this, off_1061BE18[4 * (a2[11] & 0xFFF) + 1], (float *)&v14);
  return 0;
}

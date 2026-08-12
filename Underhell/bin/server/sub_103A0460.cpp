int __thiscall sub_103A0460(float *this, int *a2)
{
  int v3; // eax
  int v4; // edi
  float *v5; // ebx
  int v6; // ecx
  int v7; // eax
  float **v8; // eax
  int v9; // eax
  double v10; // st7
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // ebx
  int v16; // edi
  unsigned int v17; // eax
  int v18; // ecx
  int v19; // edi
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int *v23; // eax
  _DWORD v25[64]; // [esp+Ch] [ebp-134h] BYREF
  _DWORD v26[5]; // [esp+10Ch] [ebp-34h] BYREF
  float v27[3]; // [esp+120h] [ebp-20h] BYREF
  float v28[3]; // [esp+12Ch] [ebp-14h] BYREF
  int v29; // [esp+138h] [ebp-8h]
  float *v30; // [esp+13Ch] [ebp-4h]
  int i; // [esp+148h] [ebp+8h]

  v3 = a2[1];
  v4 = a2[3];
  v5 = this;
  v30 = this;
  if ( v4 + 1 > v3 )
    sub_102ABFC0(a2, v4 - v3 + 1);
  ++a2[3];
  v6 = *a2;
  v7 = a2[3] - v4 - 1;
  a2[4] = *a2;
  if ( v7 > 0 )
    memcpy((void *)(v6 + 4 * v4 + 4), (const void *)(v6 + 4 * v4), 4 * v7);
  v8 = (float **)(*a2 + 4 * v4);
  if ( v8 )
    *v8 = v5;
  if ( ((_DWORD)v5[63] & 0x800) != 0 )
    sub_100DAE60((int)v5);
  v9 = *((_DWORD *)v5 + 63) >> 11;
  v10 = 256.0;
  v28[0] = v5[145] + 256.0;
  v28[1] = v5[146] + 256.0;
  v28[2] = v5[147] + 256.0;
  if ( (v9 & 1) != 0 )
  {
    sub_100DAE60((int)v5);
    v10 = 256.0;
  }
  v27[0] = v5[145] - v10;
  v27[1] = v5[146] - v10;
  v27[2] = v5[147] - v10;
  sub_1025F990(v26, (int)v25, 64, 0x2000);
  v11 = sub_1025F9C0((int)v27, (int)v28, (int)v26);
  v12 = 0;
  v29 = v11;
  for ( i = 0; v12 < v29; i = v12 )
  {
    v13 = sub_100D7680(v25[v12]);
    if ( v13 && *(_DWORD *)(v13 + 92) == *((_DWORD *)v5 + 23) && (float *)v13 != v5 )
    {
      v14 = __RTDynamicCast(
              v13,
              0,
              (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
              (int)&CNPC_RollerMine `RTTI Type Descriptor',
              0);
      v15 = v14;
      if ( *(_DWORD *)(v14 + 3832) )
      {
        v17 = *(_DWORD *)(v14 + 3812);
        if ( v17 == -1 || off_1061BE18[4 * (*(_DWORD *)(v15 + 3812) & 0xFFF) + 2] != v17 >> 12 )
          v18 = 0;
        else
          v18 = off_1061BE18[4 * (*(_DWORD *)(v15 + 3812) & 0xFFF) + 1];
        v16 = v18;
      }
      else
      {
        v16 = 0;
      }
      if ( v16 == sub_1039E5E0(v30) )
      {
        v19 = a2[3];
        v20 = a2[1];
        if ( v19 + 1 > v20 )
          sub_102ABFC0(a2, v19 - v20 + 1);
        ++a2[3];
        v21 = *a2;
        v22 = a2[3] - v19 - 1;
        a2[4] = *a2;
        if ( v22 > 0 )
          memcpy((void *)(v21 + 4 * v19 + 4), (const void *)(v21 + 4 * v19), 4 * v22);
        v23 = (int *)(*a2 + 4 * v19);
        if ( v23 )
          *v23 = v15;
      }
      v5 = v30;
    }
    v12 = i + 1;
  }
  return a2[3];
}

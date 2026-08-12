char __userpurge sub_100544E0@<al>(int a1@<ecx>, int a2@<edi>, float *a3)
{
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  int v7; // esi
  int v9; // edi
  int v10; // ecx
  float *v11; // eax
  int v12; // ecx
  double v13; // st7
  unsigned int v14; // eax
  int v15; // edx
  float *v16; // eax
  unsigned int v17; // esi
  int v18; // [esp-Ch] [ebp-80h]
  float v20; // [esp+34h] [ebp-40h]
  float v21[3]; // [esp+5Ch] [ebp-18h] BYREF
  float v22; // [esp+68h] [ebp-Ch] BYREF
  float v23; // [esp+6Ch] [ebp-8h]
  float v24; // [esp+70h] [ebp-4h]
  int savedregs; // [esp+74h] [ebp+0h] BYREF

  if ( *a3 == flt_10689730 && a3[1] == flt_10689734 && a3[2] == flt_10689738 )
  {
    v4 = *(_DWORD *)(a1 + 20);
    if ( v4 == -1 )
      return 0;
    v5 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 1];
    v6 = v4 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 2] != v6 || !*v5 )
      return 0;
    if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 2] == v6 )
    {
      v7 = *v5;
LABEL_10:
      if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
        sub_100DAE60(v7);
      *a3 = *(float *)(v7 + 580);
      a3[1] = *(float *)(v7 + 584);
      a3[2] = *(float *)(v7 + 588);
      return 0;
    }
LABEL_9:
    v7 = 0;
    goto LABEL_10;
  }
  v9 = *(_DWORD *)(a1 + 4);
  if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
    sub_100DAE60(*(_DWORD *)(a1 + 4));
  v22 = *a3 - *(float *)(v9 + 580);
  v23 = a3[1] - *(float *)(v9 + 584);
  v24 = 0.0;
  off_10689714();
  v10 = *(_DWORD *)(a1 + 4);
  v22 = v22 * 48.0;
  v23 = v23 * 48.0;
  v24 = 48.0 * v24;
  v11 = (float *)(*(int (__thiscall **)(int, float *, int))(*(_DWORD *)v10 + 504))(v10, v21, a2);
  v12 = *(_DWORD *)(a1 + 4);
  v22 = *v11 + v22;
  v23 = v11[1] + v23;
  v13 = v11[2];
  v14 = *(_DWORD *)(a1 + 20);
  v24 = v13 + v24;
  if ( v14 == -1 || off_1061BE18[4 * (v14 & 0xFFF) + 2] != v14 >> 12 )
    v15 = 0;
  else
    v15 = off_1061BE18[4 * (v14 & 0xFFF) + 1];
  v18 = v15;
  v16 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 504))(v12);
  sub_1002A5F0((int)&savedregs, a1, v16, v21, (int)&v22, 16449, v18, 0);
  if ( v20 < 1.0 )
  {
    v17 = *(_DWORD *)(a1 + 20);
    if ( v17 != -1 && off_1061BE18[4 * (v17 & 0xFFF) + 2] == v17 >> 12 )
    {
      v7 = off_1061BE18[4 * (v17 & 0xFFF) + 1];
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  return 1;
}

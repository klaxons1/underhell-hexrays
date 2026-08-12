void __usercall sub_10201650(int a1@<ecx>, int a2@<edi>)
{
  unsigned int v3; // eax
  int *v4; // ecx
  float *v5; // eax
  unsigned int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  float *v9; // eax
  unsigned int v10; // eax
  float *v11; // ebx
  int v12; // edi
  int v13; // eax
  int *v14; // edx
  unsigned int v15; // eax
  int v16; // ecx
  __int64 v17; // [esp-8h] [ebp-20h]
  _DWORD v18[3]; // [esp+8h] [ebp-10h] BYREF
  int v19; // [esp+14h] [ebp-4h]
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  v3 = *(_DWORD *)(a1 + 848);
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 848) & 0xFFF) + 1], v4[1] != v3 >> 12) || !*v4 )
  {
    sub_10200A50(a1, a2);
    v5 = (float *)sub_10200370(a1, (int)&savedregs, a2, a1, v18);
    *(float *)(a1 + 816) = *v5;
    *(float *)(a1 + 820) = v5[1];
    *(float *)(a1 + 824) = v5[2];
    v6 = *(_DWORD *)(a1 + 848);
    if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 848) & 0xFFF) + 2] != v6 >> 12 )
      v7 = 0;
    else
      v7 = off_1061BE18[4 * (*(_DWORD *)(a1 + 848) & 0xFFF) + 1];
    sub_100E0D20(v7, (float *)(a1 + 816));
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v8 = *(_DWORD *)(a1 + 848);
    if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 848) & 0xFFF) + 2] != v8 >> 12 )
      v9 = 0;
    else
      v9 = (float *)off_1061BE18[4 * (*(_DWORD *)(a1 + 848) & 0xFFF) + 1];
    v9[205] = *(float *)(a1 + 580);
    v9[206] = *(float *)(a1 + 584);
    v9[207] = *(float *)(a1 + 588);
    v10 = *(_DWORD *)(a1 + 848);
    if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 848) & 0xFFF) + 2] != *(_DWORD *)(a1 + 848) >> 12 )
      v19 = 0;
    else
      v19 = off_1061BE18[4 * (*(_DWORD *)(a1 + 848) & 0xFFF) + 1];
    if ( v10 == -1 || off_1061BE18[4 * (v10 & 0xFFF) + 2] != v10 >> 12 )
      v11 = 0;
    else
      v11 = (float *)off_1061BE18[4 * (v10 & 0xFFF) + 1];
    if ( v10 == -1 || off_1061BE18[4 * (v10 & 0xFFF) + 2] != v10 >> 12 )
      v12 = 0;
    else
      v12 = off_1061BE18[4 * (v10 & 0xFFF) + 1];
    if ( (*(_DWORD *)(v12 + 252) & 0x800) != 0 )
      sub_100DAE60(v12);
    v13 = v19;
    *(float *)(v19 + 808) = *(float *)(v12 + 580) - v11[205];
    *(float *)(v13 + 812) = *(float *)(v12 + 584) - v11[206];
    *(float *)(v13 + 816) = *(float *)(v12 + 588) - v11[207];
    *(float *)(a1 + 856) = off_10689714();
    v15 = *(_DWORD *)(a1 + 848);
    if ( v15 == -1 || (v14 = off_1061BE18, off_1061BE18[4 * (*(_DWORD *)(a1 + 848) & 0xFFF) + 2] != v15 >> 12) )
      v16 = 0;
    else
      v16 = off_1061BE18[4 * (*(_DWORD *)(a1 + 848) & 0xFFF) + 1];
    sub_100E0970(v16, (int)v14, 0, 0);
    sub_10200650(a1);
    HIDWORD(v17) = a1;
    LODWORD(v17) = a1;
    sub_1010DD80((_DWORD *)(a1 + 872), v17, 0.0);
  }
}

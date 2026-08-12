char __cdecl sub_102FF260(float a1, float a2, float a3)
{
  int v3; // edi
  int v4; // edx
  int *v5; // ebx
  unsigned int v6; // eax
  unsigned int v7; // eax
  int *v8; // ecx
  int v9; // esi
  double v10; // st4
  double v11; // st7
  double v12; // st4
  double v13; // st5
  double v14; // st7
  double v15; // st6
  float v17; // [esp+0h] [ebp-10h]

  v3 = 0;
  if ( dword_106E2DA0 <= 0 )
    return 1;
  v4 = dword_106E2D94;
  v5 = off_1061BE18;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v4 + 4 * v3);
    if ( v6 == -1 )
      goto LABEL_16;
    if ( v5[4 * (*(_DWORD *)(v4 + 4 * v3) & 0xFFF) + 2] != v6 >> 12 )
      goto LABEL_16;
    if ( !v5[4 * (*(_DWORD *)(v4 + 4 * v3) & 0xFFF) + 1] )
      goto LABEL_16;
    v7 = *(_DWORD *)(v4 + 4 * v3);
    if ( v7 == -1 )
      goto LABEL_16;
    v8 = &v5[4 * (*(_DWORD *)(v4 + 4 * v3) & 0xFFF) + 1];
    if ( v5[4 * (*(_DWORD *)(v4 + 4 * v3) & 0xFFF) + 2] != v7 >> 12 )
      goto LABEL_16;
    v9 = *v8;
    if ( !*v8 )
      goto LABEL_16;
    if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
      sub_100DAE60(*v8);
    v10 = a1 - *(float *)(v9 + 580);
    v11 = v10 * v10;
    v12 = a2 - *(float *)(v9 + 584);
    v13 = a3 - *(float *)(v9 + 588);
    v17 = v13 * v13 + v12 * v12 + v11;
    v14 = off_10689708(v17);
    v15 = *(_BYTE *)(v9 + 804) ? *(float *)(v9 + 800) : 0.0;
    if ( v15 >= v14 )
      return 0;
    v4 = dword_106E2D94;
    v5 = off_1061BE18;
LABEL_16:
    if ( ++v3 >= dword_106E2DA0 )
      return 1;
  }
}

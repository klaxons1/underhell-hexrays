void __cdecl sub_1011BC50(float *a1, float *a2, int a3, int a4, int a5, int a6, float a7)
{
  int v7; // esi
  double v8; // st4
  double v9; // st5
  double v10; // st4
  double v11; // st6
  double v12; // st4
  double v13; // st5
  double v14; // st6
  int v15; // ecx
  float v16; // [esp+10h] [ebp-18h] BYREF
  float v17; // [esp+14h] [ebp-14h]
  float v18; // [esp+18h] [ebp-10h]
  float v19; // [esp+1Ch] [ebp-Ch]
  float v20; // [esp+20h] [ebp-8h]
  float v21; // [esp+24h] [ebp-4h]

  v7 = sub_1025FC50();
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
      sub_100DAE60(v7);
    v8 = *(float *)(v7 + 584) - a1[1];
    v9 = *(float *)(v7 + 588) - a1[2];
    if ( v9 * v9 + v8 * v8 + (*(float *)(v7 + 580) - *a1) * (*(float *)(v7 + 580) - *a1) <= 90000000.0 )
      goto LABEL_8;
    if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
      sub_100DAE60(v7);
    v10 = *(float *)(v7 + 584) - a2[1];
    v11 = v10 * v10;
    v12 = *(float *)(v7 + 580) - *a2;
    v13 = v11;
    v14 = *(float *)(v7 + 588) - a2[2];
    if ( v12 * v12 + v13 + v14 * v14 <= 90000000.0 )
    {
LABEL_8:
      sub_100F5A30((_DWORD *)v7, (int)&v16, 0, 0);
      if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
        sub_100DAE60(v7);
      v15 = *(_DWORD *)(v7 + 252) >> 11;
      v19 = *a1 - *(float *)(v7 + 580);
      v20 = a1[1] - *(float *)(v7 + 584);
      v21 = a1[2] - *(float *)(v7 + 588);
      if ( (v15 & 1) != 0 )
        sub_100DAE60(v7);
      if ( v19 * v16 + v20 * v17 + v18 * v21 >= 0.0
        || (*a2 - *(float *)(v7 + 580)) * v16
         + (a2[1] - *(float *)(v7 + 584)) * v17
         + (a2[2] - *(float *)(v7 + 588)) * v18 >= 0.0 )
      {
        if ( dword_106B3200 )
          (*(void (__stdcall **)(float *, float *, int, int, int, int, _DWORD))(*(_DWORD *)dword_106B3200 + 12))(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            LODWORD(a7));
      }
    }
  }
}

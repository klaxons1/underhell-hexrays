void __cdecl sub_1011BE00(float *a1, float *a2, float *a3, int a4, int a5, int a6, int a7, int a8, float a9)
{
  int v9; // esi
  int v10; // ecx
  int v11; // edx
  double v12; // st7
  double v13; // st6
  double v14; // st5
  double v15; // st4
  double v16; // st3
  double v17; // rt1
  double v18; // st3
  double v19; // st7
  double v20; // st7
  double v21; // st5
  float v22; // [esp+10h] [ebp-30h] BYREF
  float v23; // [esp+14h] [ebp-2Ch]
  float v24; // [esp+18h] [ebp-28h]
  float v25; // [esp+1Ch] [ebp-24h]
  float v26; // [esp+20h] [ebp-20h]
  float v27; // [esp+24h] [ebp-1Ch]
  float v28; // [esp+28h] [ebp-18h]
  float v29; // [esp+2Ch] [ebp-14h]
  float v30; // [esp+30h] [ebp-10h]
  float v31; // [esp+34h] [ebp-Ch]
  float v32; // [esp+38h] [ebp-8h]
  float v33; // [esp+3Ch] [ebp-4h]

  v9 = sub_1025FC50();
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
      sub_100DAE60(v9);
    v10 = *(_DWORD *)(v9 + 252) >> 11;
    v31 = *a1 - *(float *)(v9 + 580);
    v32 = a1[1] - *(float *)(v9 + 584);
    v33 = a1[2] - *(float *)(v9 + 588);
    if ( (v10 & 1) != 0 )
      sub_100DAE60(v9);
    v11 = *(_DWORD *)(v9 + 252) >> 11;
    v12 = *a2 - *(float *)(v9 + 580);
    v28 = v12;
    v13 = a2[1] - *(float *)(v9 + 584);
    v29 = v13;
    v30 = a2[2] - *(float *)(v9 + 588);
    if ( (v11 & 1) != 0 )
    {
      sub_100DAE60(v9);
      v12 = v28;
      v13 = v29;
    }
    v14 = *a3 - *(float *)(v9 + 580);
    v25 = v14;
    v15 = a3[1] - *(float *)(v9 + 584);
    v26 = v15;
    v16 = a3[2] - *(float *)(v9 + 588);
    v27 = v16;
    if ( v31 * v31 + v32 * v32 + v33 * v33 <= 90000000.0
      || (v17 = v16, v18 = v12 * v12 + v13 * v13 + v30 * v30, v19 = v17, v18 <= 90000000.0)
      || v19 * v19 + v14 * v14 + v15 * v15 <= 90000000.0 )
    {
      sub_100F5A30((_DWORD *)v9, (int)&v22, 0, 0);
      v20 = v23;
      v21 = v22;
      if ( v32 * v23 + v31 * v22 + v33 * v24 >= 0.0
        || v20 * v29 + v28 * v21 + v24 * v30 >= 0.0
        || v21 * v25 + v20 * v26 + v24 * v27 >= 0.0 )
      {
        if ( dword_106B3200 )
          (*(void (__stdcall **)(float *, float *, float *, int, int, int, int, int, _DWORD))(*(_DWORD *)dword_106B3200
                                                                                            + 8))(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            LODWORD(a9));
      }
    }
  }
}

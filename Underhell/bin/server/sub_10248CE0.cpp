int __cdecl sub_10248CE0(int a1, float *a2, float *a3)
{
  int v5; // ecx
  float *v6; // edi
  double v7; // st1
  double v8; // st2
  double v9; // st4
  double v10; // st7
  double v11; // st6
  double v12; // st0
  double v13; // st2
  double v14; // st0
  double v15; // st1
  double v16; // st2
  double v17; // st3
  float *v18; // eax
  double v19; // st3
  double v20; // st2
  double v21; // st1
  double v22; // st2
  int v23; // eax
  int i; // edx
  double v25; // st3
  double v26; // st5
  double v27; // st3
  double v28; // st4
  double v29; // st5
  float v30; // [esp+18h] [ebp+8h]

  if ( !a1 )
    return 0;
  v5 = *(_DWORD *)(a1 + 800);
  v6 = (float *)a1;
  v7 = *(float *)(a1 + 720) - a3[1];
  v8 = *(float *)(a1 + 724) - a3[2];
  v9 = v8 * v8 + (*(float *)(a1 + 716) - *a3) * (*(float *)(a1 + 716) - *a3) + v7 * v7;
  v30 = 0.0;
  v10 = 0.0;
  v11 = 0.0;
  do
  {
    v12 = *(float *)(v5 + 720) - a3[1];
    v13 = v12 * v12;
    v14 = *(float *)(v5 + 716) - *a3;
    v15 = v13;
    v16 = *(float *)(v5 + 724) - a3[2];
    v17 = v14 * v14 + v15 + v16 * v16;
    if ( v17 < v9 )
    {
      v6 = (float *)v5;
      v30 = v11;
      v10 = 0.0;
      v9 = v17;
    }
    v18 = *(float **)(v5 + 800);
    if ( v18 )
    {
      v19 = v18[179] - *(float *)(v5 + 716);
      v20 = v18[180] - *(float *)(v5 + 720);
      v21 = v18[181] - *(float *)(v5 + 724);
      v5 = *(_DWORD *)(v5 + 800);
      v22 = v19 * v19 + v20 * v20 + v21 * v21;
      v11 = v11 + v22;
      v10 = v10 + v22;
    }
    else
    {
      v23 = *(_DWORD *)(v5 + 804);
      for ( i = 0; v23; v23 = *(_DWORD *)(v23 + 804) )
      {
        if ( ++i > 256 )
          break;
        v5 = v23;
      }
      v10 = v30 + 1.0;
      v11 = 1073741800.0;
    }
  }
  while ( v5 != a1 );
  if ( v6 == (float *)a1 )
    return 0;
  v25 = v6[180] - a2[1];
  v26 = v25 * v25;
  v27 = v6[179] - *a2;
  v28 = v26;
  v29 = v6[181] - a2[2];
  if ( v27 * v27 + v28 + v29 * v29 < 100.0 )
    return 0;
  if ( v10 < v30 )
    return -1;
  return 1;
}

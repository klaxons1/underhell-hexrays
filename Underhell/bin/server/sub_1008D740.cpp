int __cdecl sub_1008D740(float *a1, int a2, int a3)
{
  double v3; // st7
  int v4; // ebx
  int v5; // edi
  int v6; // ecx
  double v7; // st6
  double v8; // st5
  double v9; // st4
  float *v10; // edx
  double v11; // st0
  double v12; // st3
  double v13; // st0
  double v14; // st1
  double v15; // st3
  double v16; // st0
  double v17; // st3
  double v18; // st0
  double v19; // st3
  double v20; // st0
  double v21; // st3
  double v22; // st0
  double v23; // st1
  double v24; // st3
  double v25; // st0
  double v26; // st3
  double v27; // st0
  double v28; // st1
  double v29; // st3
  float *v30; // edx
  double v31; // st0
  double v32; // st3
  double v33; // st0
  double v34; // st3

  v3 = 3.4028235e38;
  v4 = a3;
  v5 = -1;
  v6 = 0;
  if ( a3 >= 4 )
  {
    v7 = *a1;
    v8 = a1[1];
    v9 = a1[2];
    v10 = (float *)(a2 + 20);
    do
    {
      v11 = *(v10 - 5) - v7;
      v12 = v11 * v11;
      v13 = *(v10 - 4) - v8;
      v14 = *(v10 - 3) - v9;
      v15 = v14 * v14 + v13 * v13 + v12;
      if ( v15 < v3 )
      {
        v3 = v15;
        v5 = v6;
      }
      v16 = *(v10 - 2) - v7;
      v17 = v16 * v16;
      v18 = *(v10 - 1) - v8;
      v19 = (*v10 - v9) * (*v10 - v9) + v18 * v18 + v17;
      if ( v19 < v3 )
      {
        v3 = v19;
        v5 = v6 + 1;
      }
      v20 = v10[1] - v7;
      v21 = v20 * v20;
      v22 = v10[2] - v8;
      v23 = v10[3] - v9;
      v24 = v23 * v23 + v22 * v22 + v21;
      if ( v24 < v3 )
      {
        v3 = v24;
        v5 = v6 + 2;
      }
      v25 = v10[4] - v7;
      v26 = v25 * v25;
      v27 = v10[5] - v8;
      v28 = v10[6] - v9;
      v29 = v28 * v28 + v27 * v27 + v26;
      if ( v29 < v3 )
      {
        v3 = v29;
        v5 = v6 + 3;
      }
      v6 += 4;
      v10 += 12;
    }
    while ( v6 < a3 - 3 );
    v4 = a3;
  }
  if ( v6 < v4 )
  {
    v30 = (float *)(a2 + 12 * v6 + 8);
    do
    {
      v31 = *(v30 - 2) - *a1;
      v32 = v31 * v31;
      v33 = *(v30 - 1) - a1[1];
      v34 = (*v30 - a1[2]) * (*v30 - a1[2]) + v33 * v33 + v32;
      if ( v34 < v3 )
      {
        v3 = v34;
        v5 = v6;
      }
      ++v6;
      v30 += 3;
    }
    while ( v6 < a3 );
  }
  return v5;
}

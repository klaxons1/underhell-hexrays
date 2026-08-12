bool __cdecl sub_100906D0(float *a1, int a2, int a3, int a4, float a5, int a6)
{
  double v6; // st7
  float *v7; // edi
  int v8; // esi
  float *v9; // edx
  double v10; // st5
  double v11; // st4
  double v12; // rt0
  double v13; // st4
  double v14; // st5
  double v15; // rt1
  double v16; // st4
  double v17; // st5
  double v18; // rt2
  double v19; // rtt
  double v20; // st4
  double v21; // st5
  double v22; // rt0
  double v23; // st3
  double v24; // st5
  double v25; // st5

  *(float *)a6 = -1.0;
  *(float *)(a6 + 4) = 1.0;
  v6 = a5;
  v7 = (float *)(a4 - 12);
  v8 = 0;
  *(_DWORD *)(a6 + 8) = -1;
  *(_BYTE *)(a6 + 12) = 1;
  v9 = a1;
  do
  {
    if ( v8 < 3 )
    {
      v10 = *(float *)((char *)v9 + a3 - (_DWORD)a1) - *v9;
      v11 = v10 - *(float *)((char *)v9 + a2 - (_DWORD)a1);
    }
    else
    {
      v10 = *(float *)((char *)v7 + (_DWORD)a1 - a4) - *v7;
      v11 = *(float *)((char *)v7 + a2 - a4) + v10;
    }
    v12 = v11;
    v13 = v10;
    v14 = v12;
    if ( v13 > 0.0 )
    {
      v15 = v13;
      v16 = v14;
      v17 = v15;
      if ( v16 > 0.0 )
      {
        *(_BYTE *)(a6 + 12) = 0;
        return 0;
      }
      v18 = v16;
      v13 = v17;
      v14 = v18;
    }
    if ( v13 <= 0.0 )
    {
      v19 = v13;
      v20 = v14;
      v21 = v19;
      if ( v20 <= 0.0 )
        goto LABEL_20;
      v22 = v20;
      v13 = v21;
      v14 = v22;
    }
    if ( v13 > 0.0 )
      *(_BYTE *)(a6 + 12) = 0;
    if ( v13 <= v14 )
    {
      v25 = (v13 + v6) / (v13 - v14);
      if ( v25 < *(float *)(a6 + 4) )
        *(float *)(a6 + 4) = v25;
    }
    else
    {
      v23 = v13 - v6;
      if ( v13 - v6 < 0.0 )
        v23 = 0.0;
      v24 = v23 / (v13 - v14);
      if ( v24 > *(float *)a6 )
      {
        *(float *)a6 = v24;
        *(_DWORD *)(a6 + 8) = v8;
      }
    }
LABEL_20:
    ++v8;
    ++v7;
    ++v9;
  }
  while ( v8 < 6 );
  if ( *(_BYTE *)(a6 + 12) )
    return 1;
  if ( *(float *)(a6 + 4) <= (double)*(float *)a6 )
    return 0;
  return *(float *)a6 >= 0.0;
}

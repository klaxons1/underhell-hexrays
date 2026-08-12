bool __stdcall sub_10042560(float *a1, int a2, float *a3, float a4, float a5, float a6)
{
  double v7; // st5
  double v8; // st7
  bool v9; // c0
  bool v10; // c3
  double v11; // st7
  double v12; // st5
  double v13; // st4
  float v14; // [esp+0h] [ebp-4h]

  if ( a3[2] - a1[2] > a4 + 0.1 )
    return 0;
  v7 = a1[2] - a3[2];
  v8 = a5 + 0.1;
  v9 = v7 < v8;
  v10 = v7 == v8;
  v11 = v7;
  if ( !v9 && !v10 )
    return 0;
  if ( a4 * 1.25 < *(float *)(a2 + 8) - a1[2] )
    return 0;
  v12 = a1[1] - a3[1];
  v13 = *a1 - *a3;
  v14 = v11 * v11 + v13 * v13 + v12 * v12;
  return a6 + 0.1 >= off_10689708(v14);
}

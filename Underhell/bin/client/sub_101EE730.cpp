char __cdecl sub_101EE730(float a1, float a2, float a3, float a4, float a5, float a6, float *a7, float *a8, float *a9)
{
  double v9; // st7
  double v10; // st5
  double v11; // st6
  double v12; // st4
  char result; // al
  float v14; // [esp+4h] [ebp+4h]

  v9 = a1;
  v10 = a3;
  v11 = a5;
  v12 = (a1 - a5) * (a1 - a3) * (a3 - a5);
  if ( 0.0 == v12 )
    return 0;
  v14 = 1.0 / v12;
  *a7 = ((a6 - a4) * v9 + (a4 - a2) * v11 + (a2 - a6) * v10) * v14;
  result = 1;
  *a8 = ((a4 - a6) * v9 * v9 + (a6 - a2) * v10 * v10 + (a2 - a4) * v11 * v11) * v14;
  *a9 = (v10 * (v9 * v9 * a6 - a2 * v11 * v11 + (a2 * v11 - a6 * v9) * v10) + v11 * (v9 * (v11 - v9) * a4)) * v14;
  return result;
}

float *__stdcall sub_1019CC50(float *a1, float a2, float a3, float a4)
{
  float *result; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st1
  double v8; // st3

  result = a1;
  v5 = 9.0 * a2 * a2;
  v6 = a2 * 4.5 * a3;
  v7 = v5 * a4;
  v8 = 1.0 / (a4 * v7 + v6 * a4 + 1.0);
  *a1 = v5 * v8;
  a1[1] = v8 * (v6 + v7);
  return result;
}

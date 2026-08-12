void __cdecl sub_1007DCD0(int a1, float *a2, float *a3, float *a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5

  v4 = a3[2] * a2[1] - a2[2] * a3[1];
  v5 = a2[2] * *a3 - *a2 * a3[2];
  v6 = *a2 * a3[1] - *a3 * a2[1];
  *a4 = v6 * a3[1] - a3[2] * v5;
  a4[1] = a3[2] * v4 - v6 * *a3;
  a4[2] = v5 * *a3 - v4 * a3[1];
  off_10689714();
}

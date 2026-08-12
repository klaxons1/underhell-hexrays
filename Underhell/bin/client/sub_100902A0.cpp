BOOL __cdecl sub_100902A0(float *a1, float a2, float *a3, float a4)
{
  double v4; // st5
  double v5; // st3
  double v6; // st7
  double v7; // st3

  v4 = a3[2] - a1[2];
  v5 = *a3 - *a1;
  v6 = v5 * v5;
  v7 = a3[1] - a1[1];
  return v7 * v7 + v6 + v4 * v4 <= (a2 + a4) * (a2 + a4);
}

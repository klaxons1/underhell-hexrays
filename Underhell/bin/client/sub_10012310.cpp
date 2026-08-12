bool __cdecl sub_10012310(float *a1, float *a2, float a3)
{
  long double v3; // st7

  v3 = a3;
  return a3 >= fabs(*a1 - *a2) && fabs(a1[1] - a2[1]) <= v3 && fabs(a1[2] - a2[2]) <= v3;
}

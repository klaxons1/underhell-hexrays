float *__cdecl sub_101ED7B0(float *a1, float *a2)
{
  long double v2; // st7
  double v3; // st5
  long double v4; // st1
  float *result; // eax
  long double v6; // rt0
  long double v7; // st6

  v2 = *a1;
  v3 = a1[8];
  v4 = sqrt(a1[4] * a1[4] + v2 * v2);
  result = a2;
  if ( v4 <= 0.001 )
  {
    a2[1] = atan2(-a1[1], a1[5]) * 57.29578;
    *a2 = 57.29578 * atan2(-v3, v4);
    a2[2] = 0.0;
  }
  else
  {
    v6 = a1[10];
    v7 = a1[9];
    a2[1] = atan2(a1[4], v2) * 57.29578;
    *a2 = atan2(-v3, v4) * 57.29578;
    a2[2] = 57.29578 * atan2(v7, v6);
  }
  return result;
}

float *__cdecl sub_101EE270(float *a1, float *a2, float *a3)
{
  long double v3; // st7
  float *result; // eax
  float v5; // [esp+4h] [ebp-Ch] BYREF
  float v6; // [esp+8h] [ebp-8h]
  float v7; // [esp+Ch] [ebp-4h]

  v5 = a2[1] * a1[2] - a1[1] * a2[2];
  v6 = *a1 * a2[2] - *a2 * a1[2];
  v7 = a1[1] * *a2 - *a1 * a2[1];
  off_103EDFF0(&v5);
  v3 = sqrt(a1[1] * a1[1] + *a1 * *a1);
  result = a3;
  if ( v3 <= 0.001 )
  {
    a3[1] = atan2(-v5, v6) * 57.29578;
    *a3 = 57.29578 * atan2(-a1[2], v3);
    a3[2] = 0.0;
  }
  else
  {
    a3[1] = atan2(a1[1], *a1) * 57.29578;
    *a3 = atan2(-a1[2], v3) * 57.29578;
    a3[2] = 57.29578 * atan2(v7, *a1 * v6 - a1[1] * v5);
  }
  return result;
}

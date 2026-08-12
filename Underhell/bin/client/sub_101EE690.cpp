float *__cdecl sub_101EE690(float *a1, float *a2)
{
  float *result; // eax

  a1[2] = 99999.0;
  a1[1] = 99999.0;
  *a1 = 99999.0;
  result = a2;
  a2[2] = -99999.0;
  a2[1] = -99999.0;
  *a2 = -99999.0;
  return result;
}

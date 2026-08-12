float *__stdcall sub_100380F0(float *a1, float *a2)
{
  float *result; // eax

  result = a1;
  *a2 = *a1;
  a2[1] = a1[1];
  a2[2] = a1[2];
  return result;
}

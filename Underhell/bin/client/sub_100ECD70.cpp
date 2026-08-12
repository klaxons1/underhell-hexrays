float *__stdcall sub_100ECD70(float *a1)
{
  float *result; // eax

  result = a1;
  a1[2] = 1.0;
  a1[1] = 1.0;
  *a1 = 1.0;
  return result;
}

float *__stdcall sub_103E8630(float *a1, float *a2, float a3)
{
  float *result; // eax

  sub_101FB4C0(a1, a2, a3);
  result = a1;
  *a1 = *a1 * 600.0;
  a1[1] = 600.0 * a1[1];
  a1[2] = 90000.0;
  return result;
}

float *__cdecl sub_1001F0C0(float a1, float *a2, float *a3)
{
  float *result; // eax

  result = a2;
  *a3 = cos(a1);
  *a2 = sin(a1);
  return result;
}

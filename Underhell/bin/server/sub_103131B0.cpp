float *__stdcall sub_103131B0(float *a1, int a2, int a3)
{
  float *result; // eax
  long double v4; // st7

  result = a1;
  v4 = sin(*(float *)(dword_106E34F4 + 44) * 0.75 * 0.5 * 0.017444445);
  *a1 = v4;
  a1[1] = v4;
  a1[2] = v4;
  return result;
}

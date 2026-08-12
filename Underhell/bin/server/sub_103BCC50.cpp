float *__stdcall sub_103BCC50(float *a1, int a2, int a3)
{
  double v3; // st7
  float *result; // eax

  v3 = *((float *)sub_102B1F10() + 8) * 0.043620002;
  result = a1;
  *a1 = v3;
  a1[1] = v3;
  a1[2] = v3;
  return result;
}

void *__cdecl sub_10422700(float *a1)
{
  void *result; // eax

  result = memset(a1, 0, 0x30u);
  *a1 = 1.0;
  a1[5] = 1.0;
  a1[10] = 1.0;
  return result;
}

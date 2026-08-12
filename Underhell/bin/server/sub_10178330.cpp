float *__stdcall sub_10178330(int a1, float *a2)
{
  float *result; // eax

  result = (float *)(off_1062BC3C + 28 * a1);
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  return result;
}

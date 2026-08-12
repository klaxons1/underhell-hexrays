int __cdecl sub_10121A30(int a1, int a2, float *a3, float *a4)
{
  int result; // eax

  *a4 = (double)(unsigned __int16)(int)(*a3 * 182.04445) * 0.0054931641;
  a4[1] = (double)(unsigned __int16)(int)(a3[1] * 182.04445) * 0.0054931641;
  result = (unsigned __int16)(int)(182.04445 * a3[2]);
  a4[2] = 0.0054931641 * (double)result;
  return result;
}

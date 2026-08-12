float *__stdcall sub_1015CF30(float *a1, int a2)
{
  float *result; // eax
  int v3; // edx
  int v4; // ecx
  long double v5; // st6

  result = a1;
  v3 = *(unsigned __int8 *)(a2 + 49);
  v4 = *(unsigned __int8 *)(a2 + 50);
  v5 = (double)*(unsigned __int8 *)(a2 + 51)
     * 0.0039215689
     * sin(*(float *)(a2 + 44) / *(float *)(a2 + 40) * 3.141592653589793);
  *a1 = (double)*(unsigned __int8 *)(a2 + 48) * v5 * 0.0039215689;
  a1[1] = (double)v3 * v5 * 0.0039215689;
  a1[2] = 0.0039215689 * (v5 * (double)v4);
  return result;
}

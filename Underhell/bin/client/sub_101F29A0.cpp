int __cdecl sub_101F29A0(unsigned __int8 *a1, float *a2)
{
  int result; // eax

  *a2 = (double)*a1 * flt_103EE280[(char)a1[3]] * 255.0;
  a2[1] = (double)a1[1] * flt_103EE280[(char)a1[3]] * 255.0;
  result = a1[2];
  a2[2] = 255.0 * ((double)result * flt_103EE280[(char)a1[3]]);
  return result;
}

int __stdcall sub_10265FE0(int a1, float *a2, int a3, int a4)
{
  int result; // eax

  result = sub_104222B0(a1, a3, a2, a4);
  if ( a2 )
  {
    *a2 = *a2 * -1.0;
    a2[1] = a2[1] * -1.0;
    a2[2] = -1.0 * a2[2];
  }
  return result;
}

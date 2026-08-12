int __cdecl sub_101989A0(_BYTE *a1, unsigned __int8 *a2, float a3)
{
  int result; // eax

  *a1 = (int)((double)*a2 * a3);
  a1[1] = (int)((double)a2[1] * a3);
  a1[2] = (int)((double)a2[2] * a3);
  result = (unsigned __int8)(int)(a3 * (double)a2[3]);
  a1[3] = result;
  return result;
}

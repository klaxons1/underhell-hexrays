int __fastcall sub_10193330(unsigned __int8 *a1, _BYTE *a2, float a3)
{
  int result; // eax

  *a2 = (int)((double)*a1 * a3);
  a2[1] = (int)((double)a1[1] * a3);
  a2[2] = (int)((double)a1[2] * a3);
  result = (unsigned __int8)(int)(a3 * (double)a1[3]);
  a2[3] = result;
  return result;
}

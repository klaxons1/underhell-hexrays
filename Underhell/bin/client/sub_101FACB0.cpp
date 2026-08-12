_BYTE *__stdcall sub_101FACB0(int a1, _BYTE *a2)
{
  _BYTE *result; // eax

  result = a2;
  *a2 = -1;
  a2[1] = -1;
  a2[2] = -1;
  a2[3] = -1;
  return result;
}

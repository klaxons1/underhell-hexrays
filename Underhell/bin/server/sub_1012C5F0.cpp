_DWORD *__stdcall sub_1012C5F0(int a1, char *String2, float *a3, float a4, int a5, int a6, int a7, int a8)
{
  _DWORD *result; // eax

  result = sub_1012C1F0(a1, String2, a3, a4, a5, a6, a7, a8);
  if ( !result )
    return sub_1012C480(a1, String2, a3, a4, a8);
  return result;
}

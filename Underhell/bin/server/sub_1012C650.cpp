_DWORD *__stdcall sub_1012C650(char *String2, float *a2, float a3, int a4, int a5, int a6, int a7)
{
  _DWORD *result; // eax

  result = sub_1012C0B0(String2, a2, a3, a4, a5, a6, a7);
  if ( !result )
    return sub_1012C350(String2, a2, a3, a7);
  return result;
}

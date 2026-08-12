_DWORD *__stdcall sub_1012C5B0(int a1, char *String2, int a3, int a4, int a5)
{
  _DWORD *result; // eax

  result = sub_1012BF20(&dword_1069E3E0, a1, String2, a3, a4, a5, 0);
  if ( !result )
    return sub_1012BC90(&dword_1069E3E0, a1, String2);
  return result;
}

char *__stdcall sub_10238270(int a1, _DWORD *a2, int a3)
{
  int v3; // edi
  char *result; // eax
  _BYTE *v5; // edx
  char v6; // cl

  v3 = (*(int (__cdecl **)(int))(a3 + 20))(a1);
  result = (char *)sub_1022B4C0(a2, *(char **)a3, (int)Locale);
  v5 = (_BYTE *)v3;
  do
  {
    v6 = *result;
    *v5++ = *result++;
  }
  while ( v6 );
  return result;
}

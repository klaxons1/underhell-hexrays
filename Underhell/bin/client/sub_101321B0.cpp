_BYTE *__stdcall sub_101321B0(int a1, int a2, int a3)
{
  _DWORD *v3; // edi
  _BYTE *result; // eax

  v3 = (_DWORD *)(*(int (__cdecl **)(int))(a3 + 20))(a1);
  result = (_BYTE *)sub_1022B4C0(*(char **)a3, (int)Locale);
  if ( result && *result )
  {
    result = (_BYTE *)sub_100B66A0((int)&dword_1042FB78, (int)result);
    *v3 = result;
  }
  else
  {
    *v3 = 0;
  }
  return result;
}

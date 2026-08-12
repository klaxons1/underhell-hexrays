_BYTE *__stdcall sub_10132200(int a1, int a2)
{
  _DWORD *v2; // edi
  _BYTE *result; // eax

  v2 = (_DWORD *)(*(int (__cdecl **)(int))(a2 + 20))(a1);
  result = *(_BYTE **)(a2 + 12);
  if ( result && *result )
  {
    result = (_BYTE *)sub_100B66A0((int)&dword_1042FB78, *(_DWORD *)(a2 + 12));
    *v2 = result;
  }
  else
  {
    *v2 = 0;
  }
  return result;
}

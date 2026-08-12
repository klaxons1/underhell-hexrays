_DWORD *__cdecl sub_101E5570(char *a1)
{
  _DWORD *result; // eax
  _DWORD *v2; // edi

  result = sub_1012BC90(&dword_1069E3E0, 0, a1);
  v2 = result;
  if ( !result )
    return v2;
  while ( (result[62] & 1) == 0 )
  {
    result = sub_1012BC90(&dword_1069E3E0, (int)result, a1);
    if ( !result )
      return v2;
  }
  return result;
}

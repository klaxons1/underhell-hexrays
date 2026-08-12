_DWORD *__cdecl sub_100C5B70(int a1)
{
  int v1; // esi
  const char *v2; // edi
  _DWORD *result; // eax
  _DWORD *v4; // edi

  v1 = 1;
  if ( *(_DWORD *)a1 == 2 && atoi(*(const char **)(a1 + 1036)) >= 1 )
  {
    if ( *(int *)a1 > 1 )
      v2 = *(const char **)(a1 + 1036);
    else
      v2 = Locale;
    v1 = atoi(v2);
  }
  result = (_DWORD *)sub_100B4090(&dword_1042FB78, "CHudCloseCaption");
  v4 = result;
  if ( result && v1 > 0 )
  {
    do
    {
      result = sub_100C54C0(v4);
      --v1;
    }
    while ( v1 );
  }
  return result;
}

int __cdecl sub_100C18D0(int *a1)
{
  int result; // eax
  const char *v2; // edx

  if ( *a1 != 2 )
    return Msg("usage:  cc_findsound 'substring'\n");
  result = sub_100B4090(&dword_1042FB78, "CHudCloseCaption");
  if ( result )
  {
    v2 = Locale;
    if ( *a1 > 1 )
      v2 = (const char *)a1[259];
    return sub_100C0810(result, (int)a1, (int)v2);
  }
  return result;
}

char __cdecl sub_100C5B10(int *a1)
{
  _DWORD *v1; // eax
  char *v2; // edx

  if ( *a1 == 2 )
  {
    v1 = (_DWORD *)sub_100B4090(&dword_1042FB78, "CHudCloseCaption");
    if ( v1 )
    {
      v2 = (char *)Locale;
      if ( *a1 > 1 )
        v2 = (char *)a1[259];
      LOBYTE(v1) = sub_100C5580(v1, v2, 0, 5.0, 0, 0);
    }
  }
  else
  {
    LOBYTE(v1) = Msg("usage:  cc_emit tokenname\n");
  }
  return (char)v1;
}

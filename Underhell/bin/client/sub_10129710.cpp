const char *__stdcall sub_10129710(_BYTE *a1, _DWORD *a2)
{
  int *v3; // eax

  if ( !a1 )
    return Locale;
  if ( *a1 != 35 )
    return a1;
  v3 = (int *)sub_10076700((int)(a1 + 1));
  if ( !v3 || !v3[11] )
    return a1;
  if ( a2 )
  {
    if ( *v3 < 0 )
      *a2 = -*v3;
  }
  return (const char *)v3[11];
}

__int16 __stdcall sub_10249670(_BYTE *a1)
{
  _BYTE *v1; // esi
  char v2; // al

  v1 = a1;
  if ( !*a1 )
    return 0;
  while ( 1 )
  {
    if ( *v1 == 38 )
    {
      v2 = *++v1;
      if ( v2 != 38 )
      {
        if ( !v2 )
          return 0;
        if ( isalnum(v2) )
          break;
      }
    }
    if ( !*++v1 )
      return 0;
  }
  return tolower((char)*v1);
}

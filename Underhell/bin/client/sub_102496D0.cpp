wint_t __stdcall sub_102496D0(wint_t *a1)
{
  wint_t *v1; // esi
  wint_t v2; // ax

  v1 = a1;
  if ( !a1 || !*a1 )
    return 0;
  while ( 1 )
  {
    if ( *v1 == 38 )
    {
      v2 = v1[1];
      ++v1;
      if ( v2 != 38 )
      {
        if ( !v2 )
          return 0;
        if ( iswalnum(v2) )
          break;
      }
    }
    if ( !*++v1 )
      return 0;
  }
  return towlower(*v1);
}

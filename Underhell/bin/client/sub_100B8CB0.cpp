_BYTE *__cdecl sub_100B8CB0(_BYTE *a1)
{
  _BYTE *result; // eax
  _BYTE *i; // ecx

  result = a1;
  for ( i = a1; *i; ++i )
  {
    if ( *i == 13 )
      *i = 10;
  }
  return result;
}

_WORD *__cdecl sub_100B8CD0(_WORD *a1)
{
  _WORD *result; // eax
  _WORD *i; // ecx

  result = a1;
  for ( i = a1; *i; ++i )
  {
    if ( *i == 13 )
      *i = 10;
  }
  return result;
}

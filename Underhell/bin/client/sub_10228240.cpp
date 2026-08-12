_BYTE *__cdecl sub_10228240(_BYTE *a1, char a2)
{
  _BYTE *result; // eax

  for ( result = a1; *result; ++result )
  {
    if ( *result == 47 || *result == 92 )
      *result = a2;
  }
  return result;
}

_BYTE *__cdecl sub_102280D0(_BYTE *a1, char a2, int a3)
{
  _BYTE *result; // eax

  for ( result = a1; result < &a1[a3]; ++result )
  {
    if ( !*result )
      break;
    if ( *result == a2 )
      return result;
  }
  return 0;
}

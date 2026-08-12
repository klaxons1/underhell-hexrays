char *__cdecl sub_100B8C80(char *a1)
{
  char *result; // eax
  char *v2; // esi
  char *i; // edx
  char v4; // cl

  result = a1;
  v2 = a1;
  for ( i = a1; *i; ++i )
  {
    v4 = *i;
    if ( *i <= 0 || v4 >= 6 )
      *v2++ = v4;
  }
  *v2 = 0;
  return result;
}

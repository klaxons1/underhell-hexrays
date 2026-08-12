const char *__cdecl sub_10228270(const char *a1)
{
  const char *result; // eax

  result = &a1[strlen(a1) - 1];
  if ( result == a1 )
    return 0;
  while ( *(result - 1) != 46 )
  {
    if ( --result == a1 )
      return 0;
  }
  if ( result == a1 || *result == 92 || *result == 47 )
    return 0;
  return result;
}

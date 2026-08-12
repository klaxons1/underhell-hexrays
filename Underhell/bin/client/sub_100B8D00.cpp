signed int __cdecl sub_100B8D00(const char *a1)
{
  signed int result; // eax
  char v2; // cl

  result = strlen(a1) - 1;
  if ( result >= 0 )
  {
    v2 = a1[result];
    if ( v2 == 10 || v2 == 13 )
      a1[result] = 0;
  }
  return result;
}

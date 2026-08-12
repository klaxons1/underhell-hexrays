char *__cdecl sub_1023A5F0(char *a1)
{
  char *result; // eax
  char v2; // cl

  for ( result = a1; ; ++result )
  {
    v2 = *result;
    if ( *result != 42
      && v2 != 63
      && v2 != 33
      && v2 != 35
      && v2 != 64
      && v2 != 62
      && v2 != 60
      && v2 != 94
      && v2 != 41
      && v2 != 125 )
    {
      break;
    }
  }
  return result;
}

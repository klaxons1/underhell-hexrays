signed int __cdecl sub_104298D0(const char *a1)
{
  signed int result; // eax
  char v2; // cl

  result = strlen(a1) - 1;
  if ( result > 0 )
  {
    do
    {
      v2 = a1[result];
      if ( v2 == 92 )
        break;
      if ( v2 == 47 )
        break;
      --result;
    }
    while ( result > 0 );
    a1[result] = 0;
  }
  return result;
}

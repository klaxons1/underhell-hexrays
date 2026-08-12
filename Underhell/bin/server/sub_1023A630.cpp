char __cdecl sub_1023A630(char *a1, char a2)
{
  char v3; // al

  while ( 1 )
  {
    v3 = *a1;
    if ( *a1 != 42
      && v3 != 63
      && v3 != 33
      && v3 != 35
      && v3 != 64
      && v3 != 62
      && v3 != 60
      && v3 != 94
      && v3 != 41
      && v3 != 125 )
    {
      return 0;
    }
    if ( v3 == a2 )
      break;
    ++a1;
  }
  return 1;
}

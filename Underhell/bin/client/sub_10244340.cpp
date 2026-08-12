int __cdecl sub_10244340(char *String1)
{
  int v1; // esi

  v1 = 0;
  while ( _stricmp(String1, (&off_103FD144)[2 * v1]) )
  {
    if ( ++v1 >= 18 )
      return 0;
  }
  return dword_103FD140[2 * v1];
}

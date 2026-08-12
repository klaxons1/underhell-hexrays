int __cdecl sub_101890B0(char *String1)
{
  int v1; // esi

  v1 = 0;
  while ( _stricmp(String1, (&off_106324E8)[v1]) )
  {
    if ( (unsigned int)++v1 >= 0x3F )
      return -1;
  }
  return v1;
}

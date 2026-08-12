int __stdcall sub_100F34E0(char *String2)
{
  int v1; // esi

  v1 = 0;
  while ( _stricmp((&off_103E1894)[2 * v1], String2) )
  {
    if ( (unsigned int)++v1 >= 6 )
      return 0;
  }
  return dword_103E1898[2 * v1];
}

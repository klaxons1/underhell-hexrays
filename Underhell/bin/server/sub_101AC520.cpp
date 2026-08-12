int __stdcall sub_101AC520(char *String2)
{
  int v1; // esi

  v1 = 0;
  while ( _stricmp((&off_10634FD0)[2 * v1], String2) )
  {
    if ( (unsigned int)++v1 >= 6 )
      return 0;
  }
  return dword_10634FD4[2 * v1];
}

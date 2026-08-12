int *sub_1019F460()
{
  if ( (dword_104496E4 & 1) == 0 )
  {
    dword_104496E4 |= 1u;
    dword_104496C8 = (int)"C_PropCrane";
    dword_104496D0 = 0;
    dword_104496D4 = 0;
    dword_104496D8 = 0;
    dword_104496DC = 0;
    dword_104496E0 = 0;
    dword_104496CC = 11;
    atexit(sub_102CD9A0);
  }
  dword_103EB6B0 = (int)&dword_103D8A64;
  dword_103EB6A8 = 1;
  dword_103EB6A4 = (int)asc_103EB724;
  return &dword_103EB6A4;
}

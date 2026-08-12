int *sub_10075FF0()
{
  if ( (dword_104133AC & 1) == 0 )
  {
    dword_104133AC |= 1u;
    dword_10413390 = (int)"player_info_s";
    dword_10413398 = 0;
    dword_1041339C = 0;
    dword_104133A0 = 0;
    dword_104133A4 = 0;
    dword_104133A8 = 0;
    dword_10413394 = 13;
    atexit(sub_102C9140);
  }
  dword_103DC810 = 0;
  dword_103DC808 = 9;
  dword_103DC804 = (int)asc_103DCA5C;
  return &dword_103DC804;
}

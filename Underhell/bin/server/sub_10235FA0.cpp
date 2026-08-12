int *sub_10235FA0()
{
  if ( (dword_106C49CC & 1) == 0 )
  {
    dword_106C49CC |= 1u;
    dword_106C49B0 = (int)"CShadowControl";
    dword_106C49B8 = 0;
    dword_106C49BC = 0;
    dword_106C49C0 = 0;
    dword_106C49C4 = 0;
    dword_106C49C8 = 0;
    dword_106C49B4 = 14;
    atexit(sub_10473EC0);
  }
  dword_1064A71C = (int)&dword_1060F348;
  dword_1064A714 = 7;
  dword_1064A710 = (int)&unk_1064A7BC;
  return &dword_1064A710;
}

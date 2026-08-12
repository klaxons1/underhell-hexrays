int *sub_10110DD0()
{
  if ( (dword_1069B0D4 & 1) == 0 )
  {
    dword_1069B0D4 |= 1u;
    dword_1069B0B8 = (int)"CPointClientCommand";
    dword_1069B0C0 = 0;
    dword_1069B0C4 = 0;
    dword_1069B0C8 = 0;
    dword_1069B0CC = 0;
    dword_1069B0D0 = 0;
    dword_1069B0BC = 19;
    atexit(sub_104705B0);
  }
  dword_106151F8 = (int)&dword_1060F348;
  dword_106151F0 = 1;
  dword_106151EC = (int)&unk_10615314;
  return &dword_106151EC;
}

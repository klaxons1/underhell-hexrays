int *sub_102881B0()
{
  if ( (dword_106D4F5C & 1) == 0 )
  {
    dword_106D4F5C |= 1u;
    dword_106D4F40 = (int)"CSteamJet";
    dword_106D4F48 = 0;
    dword_106D4F4C = 0;
    dword_106D4F50 = 0;
    dword_106D4F54 = 0;
    dword_106D4F58 = 0;
    dword_106D4F44 = 9;
    atexit(sub_10475830);
  }
  dword_1065C29C = (int)&dword_1060F348;
  dword_1065C294 = 14;
  dword_1065C290 = (int)&unk_1065C314;
  return &dword_1065C290;
}

int *sub_10246E70()
{
  if ( (dword_106C5D0C & 1) == 0 )
  {
    dword_106C5D0C |= 1u;
    dword_106C5CF0 = (int)"CBaseToggle";
    dword_106C5CF8 = 0;
    dword_106C5CFC = 0;
    dword_106C5D00 = 0;
    dword_106C5D04 = 0;
    dword_106C5D08 = 0;
    dword_106C5CF4 = 11;
    atexit(sub_104742A0);
  }
  dword_1064E49C = (int)&dword_1060F348;
  dword_1064E494 = 15;
  dword_1064E490 = (int)&unk_1064E61C;
  return &dword_1064E490;
}

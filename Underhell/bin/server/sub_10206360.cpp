int *sub_10206360()
{
  if ( (dword_106C1B54 & 1) == 0 )
  {
    dword_106C1B54 |= 1u;
    dword_106C1B38 = (int)"CPointTeleport";
    dword_106C1B40 = 0;
    dword_106C1B44 = 0;
    dword_106C1B48 = 0;
    dword_106C1B4C = 0;
    dword_106C1B50 = 0;
    dword_106C1B3C = 14;
    atexit(sub_104738A0);
  }
  dword_10642664 = (int)&dword_1060F348;
  dword_1064265C = 3;
  dword_10642658 = (int)&unk_106426FC;
  return &dword_10642658;
}

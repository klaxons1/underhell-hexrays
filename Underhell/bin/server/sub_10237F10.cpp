int *sub_10237F10()
{
  if ( (dword_106C4E30 & 1) == 0 )
  {
    dword_106C4E30 |= 1u;
    dword_106C4E14 = (int)"CSlideshowDisplay";
    dword_106C4E1C = 0;
    dword_106C4E20 = 0;
    dword_106C4E24 = 0;
    dword_106C4E28 = 0;
    dword_106C4E2C = 0;
    dword_106C4E18 = 17;
    atexit(sub_10473F80);
  }
  dword_1064B060 = (int)&dword_1060F348;
  dword_1064B058 = 20;
  dword_1064B054 = (int)&unk_1064B104;
  return &dword_1064B054;
}

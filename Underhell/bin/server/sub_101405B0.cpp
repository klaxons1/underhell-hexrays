int *sub_101405B0()
{
  if ( (dword_106B0444 & 1) == 0 )
  {
    dword_106B0444 |= 1u;
    dword_106B0428 = (int)"CEnvFireSensor";
    dword_106B0430 = 0;
    dword_106B0434 = 0;
    dword_106B0438 = 0;
    dword_106B043C = 0;
    dword_106B0440 = 0;
    dword_106B042C = 14;
    atexit(sub_10471150);
  }
  dword_10622C6C = (int)&dword_1060F348;
  if ( (dword_106B0444 & 2) == 0 )
  {
    dword_106B0444 |= 2u;
    dword_106230AC = (int)off_10614A2C;
    dword_106230B0 = 0;
    dword_106230B4 = 0;
    dword_106230B8 = 0;
    dword_106230BC = 0;
    dword_106230C0 = 0;
    dword_106230C4 = 0;
    dword_106230C8 = 11;
    dword_106230CC = (int)"m_OnHeatLevelEnd";
    dword_106230D0 = 844;
    dword_106230D4 = 0;
    dword_106230D8 = 1441793;
    dword_106230DC = (int)"OnHeatLevelEnd";
    dword_106230E0 = (int)off_10614A2C;
    dword_106230E4 = 0;
    dword_106230E8 = 0;
    dword_106230EC = 0;
    dword_106230F0 = 0;
    dword_106230F4 = 0;
    dword_106230F8 = 0;
  }
  dword_10622C64 = 10;
  dword_10622C60 = (int)&unk_10622EF4;
  return &dword_10622C60;
}

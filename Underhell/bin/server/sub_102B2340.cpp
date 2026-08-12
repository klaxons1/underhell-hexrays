int *sub_102B2340()
{
  if ( (dword_106DC078 & 1) == 0 )
  {
    dword_106DC078 |= 1u;
    dword_106DC05C = (int)"CBaseHLCombatWeapon";
    dword_106DC064 = 0;
    dword_106DC068 = 0;
    dword_106DC06C = 0;
    dword_106DC070 = 0;
    dword_106DC074 = 0;
    dword_106DC060 = 19;
    atexit(sub_104768D0);
  }
  dword_106609D8 = (int)&dword_1060E7F4;
  dword_106609D0 = 6;
  dword_106609CC = (int)&unk_10660A84;
  return &dword_106609CC;
}

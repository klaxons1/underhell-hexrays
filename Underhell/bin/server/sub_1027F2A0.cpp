int *sub_1027F2A0()
{
  if ( (dword_106D18D8 & 1) == 0 )
  {
    dword_106D18D8 |= 1u;
    dword_106D18BC = (int)"CWeaponShotgunSpas12";
    dword_106D18C4 = 0;
    dword_106D18C8 = 0;
    dword_106D18CC = 0;
    dword_106D18D0 = 0;
    dword_106D18D4 = 0;
    dword_106D18C0 = 20;
    atexit(sub_10475320);
  }
  dword_10658D90 = (int)&dword_106609CC;
  dword_10658D88 = 2;
  dword_10658D84 = (int)&unk_10658FD4;
  return &dword_10658D84;
}

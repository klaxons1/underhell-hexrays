int *sub_10280630()
{
  if ( (dword_106D1E40 & 1) == 0 )
  {
    dword_106D1E40 |= 1u;
    dword_106D1E24 = (int)"CWeaponSMGMP5EOD";
    dword_106D1E2C = 0;
    dword_106D1E30 = 0;
    dword_106D1E34 = 0;
    dword_106D1E38 = 0;
    dword_106D1E3C = 0;
    dword_106D1E28 = 16;
    atexit(sub_10475460);
  }
  dword_10659910 = (int)&dword_10660834;
  dword_10659908 = 2;
  dword_10659904 = (int)&unk_10659B9C;
  return &dword_10659904;
}

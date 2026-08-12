int *sub_1027FD50()
{
  if ( (dword_106D1B90 & 1) == 0 )
  {
    dword_106D1B90 |= 1u;
    dword_106D1B74 = (int)"CWeaponSMGMP5";
    dword_106D1B7C = 0;
    dword_106D1B80 = 0;
    dword_106D1B84 = 0;
    dword_106D1B88 = 0;
    dword_106D1B8C = 0;
    dword_106D1B78 = 13;
    atexit(sub_104753C0);
  }
  dword_10659310 = (int)&dword_10660834;
  dword_10659308 = 2;
  dword_10659304 = (int)&unk_10659594;
  return &dword_10659304;
}

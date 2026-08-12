int *sub_103F4BB0()
{
  if ( (dword_106EF010 & 1) == 0 )
  {
    dword_106EF010 |= 1u;
    dword_106EEFF4 = (int)"CWeaponAlyxGun";
    dword_106EEFFC = 0;
    dword_106EF000 = 0;
    dword_106EF004 = 0;
    dword_106EF008 = 0;
    dword_106EF00C = 0;
    dword_106EEFF8 = 14;
    atexit(sub_104794F0);
  }
  dword_10684818 = (int)&dword_10660834;
  dword_10684810 = 1;
  dword_1068480C = (int)&unk_106EEFC0;
  return &dword_1068480C;
}

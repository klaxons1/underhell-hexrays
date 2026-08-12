int *sub_103F44A0()
{
  if ( (dword_106EEEC4 & 1) == 0 )
  {
    dword_106EEEC4 |= 1u;
    dword_106EEEA8 = (int)"CWeapon357";
    dword_106EEEB0 = 0;
    dword_106EEEB4 = 0;
    dword_106EEEB8 = 0;
    dword_106EEEBC = 0;
    dword_106EEEC0 = 0;
    dword_106EEEAC = 10;
    atexit(sub_104794B0);
  }
  dword_106847A4 = (int)&dword_106609CC;
  dword_1068479C = 1;
  dword_10684798 = (int)&unk_106EEE74;
  return &dword_10684798;
}

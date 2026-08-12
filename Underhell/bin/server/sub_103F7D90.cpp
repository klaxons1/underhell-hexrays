int *sub_103F7D90()
{
  if ( (dword_106EF8B0 & 1) == 0 )
  {
    dword_106EF8B0 |= 1u;
    dword_106EF894 = (int)"CWeaponCrossbow";
    dword_106EF89C = 0;
    dword_106EF8A0 = 0;
    dword_106EF8A4 = 0;
    dword_106EF8A8 = 0;
    dword_106EF8AC = 0;
    dword_106EF898 = 15;
    atexit(sub_104796F0);
  }
  dword_1068528C = (int)&dword_106609CC;
  dword_10685284 = 2;
  dword_10685280 = (int)&unk_10685384;
  return &dword_10685280;
}

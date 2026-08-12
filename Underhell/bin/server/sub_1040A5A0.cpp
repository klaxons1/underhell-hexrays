int *sub_1040A5A0()
{
  if ( (dword_106F07F0 & 1) == 0 )
  {
    dword_106F07F0 |= 1u;
    dword_106F07D4 = (int)"CWeaponShotgun";
    dword_106F07DC = 0;
    dword_106F07E0 = 0;
    dword_106F07E4 = 0;
    dword_106F07E8 = 0;
    dword_106F07EC = 0;
    dword_106F07D8 = 14;
    atexit(sub_10479AA0);
  }
  dword_10687230 = (int)&dword_106609CC;
  dword_10687228 = 3;
  dword_10687224 = (int)&unk_1068746C;
  return &dword_10687224;
}

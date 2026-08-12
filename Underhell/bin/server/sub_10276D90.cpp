int *sub_10276D90()
{
  if ( (dword_106CFF20 & 1) == 0 )
  {
    dword_106CFF20 |= 1u;
    dword_106CFF04 = (int)"CWeaponBfgMgl";
    dword_106CFF0C = 0;
    dword_106CFF10 = 0;
    dword_106CFF14 = 0;
    dword_106CFF18 = 0;
    dword_106CFF1C = 0;
    dword_106CFF08 = 13;
    atexit(sub_10474D50);
  }
  dword_10656F78 = (int)&dword_106609CC;
  dword_10656F70 = 2;
  dword_10656F6C = (int)&unk_106571AC;
  return &dword_10656F6C;
}

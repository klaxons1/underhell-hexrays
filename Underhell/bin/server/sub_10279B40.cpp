int *sub_10279B40()
{
  if ( (dword_106D0A78 & 1) == 0 )
  {
    dword_106D0A78 |= 1u;
    dword_106D0A5C = (int)"CWeaponPistolBeretta";
    dword_106D0A64 = 0;
    dword_106D0A68 = 0;
    dword_106D0A6C = 0;
    dword_106D0A70 = 0;
    dword_106D0A74 = 0;
    dword_106D0A60 = 20;
    atexit(sub_10474FF0);
  }
  dword_106578B0 = (int)&dword_106609CC;
  dword_106578A8 = 4;
  dword_106578A4 = (int)&unk_10657A04;
  return &dword_106578A4;
}

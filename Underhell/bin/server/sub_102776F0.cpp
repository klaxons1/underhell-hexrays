int *sub_102776F0()
{
  if ( (dword_106D0078 & 1) == 0 )
  {
    dword_106D0078 |= 1u;
    dword_106D005C = (int)"CWeaponBfgMinigun";
    dword_106D0064 = 0;
    dword_106D0068 = 0;
    dword_106D006C = 0;
    dword_106D0070 = 0;
    dword_106D0074 = 0;
    dword_106D0060 = 17;
    atexit(sub_10474DA0);
  }
  dword_10657228 = (int)&dword_10660834;
  dword_10657220 = 2;
  dword_1065721C = (int)&unk_106574F4;
  return &dword_1065721C;
}

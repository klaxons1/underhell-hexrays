int *sub_1027B8D0()
{
  if ( (dword_106D0F8C & 1) == 0 )
  {
    dword_106D0F8C |= 1u;
    dword_106D0F70 = (int)"CWeaponPython";
    dword_106D0F78 = 0;
    dword_106D0F7C = 0;
    dword_106D0F80 = 0;
    dword_106D0F84 = 0;
    dword_106D0F88 = 0;
    dword_106D0F74 = 13;
    atexit(sub_10475100);
  }
  dword_10657F54 = (int)&dword_106609CC;
  dword_10657F4C = 1;
  dword_10657F48 = (int)&unk_106D0F3C;
  return &dword_10657F48;
}

int *sub_1027B180()
{
  if ( (dword_106D0DC8 & 1) == 0 )
  {
    dword_106D0DC8 |= 1u;
    dword_106D0DAC = (int)"CWeaponPistolGlock";
    dword_106D0DB4 = 0;
    dword_106D0DB8 = 0;
    dword_106D0DBC = 0;
    dword_106D0DC0 = 0;
    dword_106D0DC4 = 0;
    dword_106D0DB0 = 18;
    atexit(sub_104750B0);
  }
  dword_10657D20 = (int)&dword_106609CC;
  dword_10657D18 = 4;
  dword_10657D14 = (int)&unk_10657E74;
  return &dword_10657D14;
}

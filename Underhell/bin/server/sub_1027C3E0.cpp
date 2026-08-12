int *sub_1027C3E0()
{
  if ( (dword_106D10EC & 1) == 0 )
  {
    dword_106D10EC |= 1u;
    dword_106D10D0 = (int)"CWeaponPistolSocom";
    dword_106D10D8 = 0;
    dword_106D10DC = 0;
    dword_106D10E0 = 0;
    dword_106D10E4 = 0;
    dword_106D10E8 = 0;
    dword_106D10D4 = 18;
    atexit(sub_10475160);
  }
  dword_10657FC8 = (int)&dword_106609CC;
  dword_10657FC0 = 5;
  dword_10657FBC = (int)&unk_1065811C;
  return &dword_10657FBC;
}

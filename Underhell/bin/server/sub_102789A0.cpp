int *sub_102789A0()
{
  if ( (dword_106D0520 & 1) == 0 )
  {
    dword_106D0520 |= 1u;
    dword_106D0504 = (int)"CWeaponBaton";
    dword_106D050C = 0;
    dword_106D0510 = 0;
    dword_106D0514 = 0;
    dword_106D0518 = 0;
    dword_106D051C = 0;
    dword_106D0508 = 12;
    atexit(sub_10474ED0);
  }
  dword_106576B0 = (int)&dword_106609CC;
  dword_106576A8 = 1;
  dword_106576A4 = (int)&unk_1065776C;
  return &dword_106576A4;
}

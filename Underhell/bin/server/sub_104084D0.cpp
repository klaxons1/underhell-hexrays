int *sub_104084D0()
{
  if ( (dword_106F05C0 & 1) == 0 )
  {
    dword_106F05C0 |= 1u;
    dword_106F05A4 = (int)"CWeaponRPG";
    dword_106F05AC = 0;
    dword_106F05B0 = 0;
    dword_106F05B4 = 0;
    dword_106F05B8 = 0;
    dword_106F05BC = 0;
    dword_106F05A8 = 10;
    atexit(sub_10479A50);
  }
  dword_10686740 = (int)&dword_106609CC;
  dword_10686738 = 7;
  dword_10686734 = (int)&unk_10686CD4;
  return &dword_10686734;
}

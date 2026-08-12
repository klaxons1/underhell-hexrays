int *sub_1027E3F0()
{
  if ( (dword_106D1618 & 1) == 0 )
  {
    dword_106D1618 |= 1u;
    dword_106D15FC = (int)"CWeaponShotgunM3";
    dword_106D1604 = 0;
    dword_106D1608 = 0;
    dword_106D160C = 0;
    dword_106D1610 = 0;
    dword_106D1614 = 0;
    dword_106D1600 = 16;
    atexit(sub_10475280);
  }
  dword_10658820 = (int)&dword_106609CC;
  dword_10658818 = 2;
  dword_10658814 = (int)&unk_10658A5C;
  return &dword_10658814;
}

int *sub_1027EBC0()
{
  if ( (dword_106D1778 & 1) == 0 )
  {
    dword_106D1778 |= 1u;
    dword_106D175C = (int)"CWeaponShotgunM5";
    dword_106D1764 = 0;
    dword_106D1768 = 0;
    dword_106D176C = 0;
    dword_106D1770 = 0;
    dword_106D1774 = 0;
    dword_106D1760 = 16;
    atexit(sub_104752D0);
  }
  dword_10658AD8 = (int)&dword_106609CC;
  dword_10658AD0 = 2;
  dword_10658ACC = (int)&unk_10658D14;
  return &dword_10658ACC;
}

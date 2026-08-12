int *sub_1027D950()
{
  if ( (dword_106D14B8 & 1) == 0 )
  {
    dword_106D14B8 |= 1u;
    dword_106D149C = (int)"CWeaponSniper";
    dword_106D14A4 = 0;
    dword_106D14A8 = 0;
    dword_106D14AC = 0;
    dword_106D14B0 = 0;
    dword_106D14B4 = 0;
    dword_106D14A0 = 13;
    atexit(sub_10475230);
  }
  dword_10658520 = (int)&dword_106609CC;
  dword_10658518 = 2;
  dword_10658514 = (int)&unk_106587A4;
  return &dword_10658514;
}

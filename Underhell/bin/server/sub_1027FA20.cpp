int *sub_1027FA20()
{
  if ( (dword_106D1A38 & 1) == 0 )
  {
    dword_106D1A38 |= 1u;
    dword_106D1A1C = (int)"CWeaponShotgunXM1014";
    dword_106D1A24 = 0;
    dword_106D1A28 = 0;
    dword_106D1A2C = 0;
    dword_106D1A30 = 0;
    dword_106D1A34 = 0;
    dword_106D1A20 = 20;
    atexit(sub_10475370);
  }
  dword_10659050 = (int)&dword_106609CC;
  dword_10659048 = 2;
  dword_10659044 = (int)&unk_10659294;
  return &dword_10659044;
}

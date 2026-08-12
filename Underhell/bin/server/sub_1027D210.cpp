int *sub_1027D210()
{
  if ( (dword_106D1288 & 1) == 0 )
  {
    dword_106D1288 |= 1u;
    dword_106D126C = (int)"CWeaponG36K";
    dword_106D1274 = 0;
    dword_106D1278 = 0;
    dword_106D127C = 0;
    dword_106D1280 = 0;
    dword_106D1284 = 0;
    dword_106D1270 = 11;
    atexit(sub_104751E0);
  }
  dword_1065822C = (int)&dword_10660818;
  dword_10658224 = 2;
  dword_10658220 = (int)&unk_106584A4;
  return &dword_10658220;
}

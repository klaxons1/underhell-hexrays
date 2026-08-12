int *sub_103CEED0()
{
  if ( (dword_106EC870 & 1) == 0 )
  {
    dword_106EC870 |= 1u;
    dword_106EC854 = (int)"CZombie";
    dword_106EC85C = 0;
    dword_106EC860 = 0;
    dword_106EC864 = 0;
    dword_106EC868 = 0;
    dword_106EC86C = 0;
    dword_106EC858 = 7;
    atexit(sub_10478F20);
  }
  dword_1067DC6C = (int)&dword_1066E1D0;
  dword_1067DC64 = 5;
  dword_1067DC60 = (int)asc_1067DCFC;
  return &dword_1067DC60;
}

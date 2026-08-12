int *sub_10151B60()
{
  if ( (dword_106B2C50 & 1) == 0 )
  {
    dword_106B2C50 |= 1u;
    dword_106B2C34 = (int)"CFuncSmokeVolume";
    dword_106B2C3C = 0;
    dword_106B2C40 = 0;
    dword_106B2C44 = 0;
    dword_106B2C48 = 0;
    dword_106B2C4C = 0;
    dword_106B2C38 = 16;
    atexit(sub_10471620);
  }
  dword_10627200 = (int)&dword_1060F348;
  dword_106271F8 = 12;
  dword_106271F4 = (int)asc_106272A4;
  return &dword_106271F4;
}

int *sub_10140530()
{
  if ( (dword_106B0424 & 1) == 0 )
  {
    dword_106B0424 |= 1u;
    dword_106B0408 = (int)"CEnvFireSource";
    dword_106B0410 = 0;
    dword_106B0414 = 0;
    dword_106B0418 = 0;
    dword_106B041C = 0;
    dword_106B0420 = 0;
    dword_106B040C = 14;
    atexit(sub_10471140);
  }
  dword_10622C54 = (int)&dword_1060F348;
  dword_10622C4C = 5;
  dword_10622C48 = (int)&unk_10622DBC;
  return &dword_10622C48;
}

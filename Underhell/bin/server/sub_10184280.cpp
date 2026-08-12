int *sub_10184280()
{
  if ( (dword_106B6C68 & 1) == 0 )
  {
    dword_106B6C68 |= 1u;
    dword_106B6C4C = (int)"CMaterialModifyControl";
    dword_106B6C54 = 0;
    dword_106B6C58 = 0;
    dword_106B6C5C = 0;
    dword_106B6C60 = 0;
    dword_106B6C64 = 0;
    dword_106B6C50 = 22;
    atexit(sub_104720E0);
  }
  dword_10630830 = (int)&dword_1060F348;
  dword_10630828 = 16;
  dword_10630824 = (int)asc_106308E4;
  return &dword_10630824;
}

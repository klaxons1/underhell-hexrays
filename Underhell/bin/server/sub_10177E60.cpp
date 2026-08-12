int *sub_10177E60()
{
  if ( (dword_106B5DB8 & 1) == 0 )
  {
    dword_106B5DB8 |= 1u;
    dword_106B5D9C = (int)"CWorldItem";
    dword_106B5DA4 = 0;
    dword_106B5DA8 = 0;
    dword_106B5DAC = 0;
    dword_106B5DB0 = 0;
    dword_106B5DB4 = 0;
    dword_106B5DA0 = 10;
    atexit(sub_10471E70);
  }
  dword_1062B920 = (int)&dword_1060D0FC;
  dword_1062B918 = 1;
  dword_1062B914 = (int)&unk_1062B9CC;
  return &dword_1062B914;
}

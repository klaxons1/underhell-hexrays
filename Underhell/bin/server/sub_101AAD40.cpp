int *sub_101AAD40()
{
  if ( (dword_106B96C4 & 1) == 0 )
  {
    dword_106B96C4 |= 1u;
    dword_106B96A8 = (int)"CParticleLight";
    dword_106B96B0 = 0;
    dword_106B96B4 = 0;
    dword_106B96B8 = 0;
    dword_106B96BC = 0;
    dword_106B96C0 = 0;
    dword_106B96AC = 14;
    atexit(sub_10472B70);
  }
  dword_10633DC0 = (int)&dword_1060F348;
  dword_10633DB8 = 4;
  dword_10633DB4 = (int)&unk_10633E5C;
  return &dword_10633DB4;
}

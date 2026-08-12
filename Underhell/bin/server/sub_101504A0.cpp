int *sub_101504A0()
{
  if ( (dword_106B2644 & 1) == 0 )
  {
    dword_106B2644 |= 1u;
    dword_106B2628 = (int)"CFunc_LOD";
    dword_106B2630 = 0;
    dword_106B2634 = 0;
    dword_106B2638 = 0;
    dword_106B263C = 0;
    dword_106B2640 = 0;
    dword_106B262C = 9;
    atexit(sub_10471560);
  }
  dword_10626B7C = (int)&dword_1060F348;
  dword_10626B74 = 1;
  dword_10626B70 = (int)&unk_10626C0C;
  return &dword_10626B70;
}

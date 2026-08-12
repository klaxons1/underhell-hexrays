int *sub_101F2890()
{
  if ( (dword_106BCFA0 & 1) == 0 )
  {
    dword_106BCFA0 |= 1u;
    dword_106BCF84 = (int)"CPlayerState";
    dword_106BCF8C = 0;
    dword_106BCF90 = 0;
    dword_106BCF94 = 0;
    dword_106BCF98 = 0;
    dword_106BCF9C = 0;
    dword_106BCF88 = 12;
    atexit(sub_10473570);
  }
  dword_1063C518 = 0;
  dword_1063C510 = 2;
  dword_1063C50C = (int)&unk_1063C864;
  return &dword_1063C50C;
}

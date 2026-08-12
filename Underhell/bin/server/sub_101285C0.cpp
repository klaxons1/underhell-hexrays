int *sub_101285C0()
{
  if ( (dword_1069DC88 & 1) == 0 )
  {
    dword_1069DC88 |= 1u;
    dword_1069DC6C = (int)"CEnvSplash";
    dword_1069DC74 = 0;
    dword_1069DC78 = 0;
    dword_1069DC7C = 0;
    dword_1069DC80 = 0;
    dword_1069DC84 = 0;
    dword_1069DC70 = 10;
    atexit(sub_10470AA0);
  }
  dword_106199BC = (int)&dword_1060F348;
  dword_106199B4 = 2;
  dword_106199B0 = (int)&unk_1061ADA4;
  return &dword_106199B0;
}

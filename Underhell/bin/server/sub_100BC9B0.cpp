int *sub_100BC9B0()
{
  if ( (dword_10695704 & 1) == 0 )
  {
    dword_10695704 |= 1u;
    dword_106956E8 = (int)"CBaseAchievement";
    dword_106956F0 = 0;
    dword_106956F4 = 0;
    dword_106956F8 = 0;
    dword_106956FC = 0;
    dword_10695700 = 0;
    dword_106956EC = 16;
    atexit(sub_1046F770);
  }
  dword_1060CFA4 = 0;
  dword_1060CF9C = 1;
  dword_1060CF98 = (int)&unk_1060D00C;
  return &dword_1060CF98;
}

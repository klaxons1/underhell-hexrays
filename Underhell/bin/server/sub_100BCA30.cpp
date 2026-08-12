int *sub_100BCA30()
{
  if ( (dword_10695724 & 1) == 0 )
  {
    dword_10695724 |= 1u;
    dword_10695708 = (int)"CFailableAchievement";
    dword_10695710 = 0;
    dword_10695714 = 0;
    dword_10695718 = 0;
    dword_1069571C = 0;
    dword_10695720 = 0;
    dword_1069570C = 20;
    atexit(sub_1046F780);
  }
  dword_1060CFBC = (int)&dword_1060CF98;
  dword_1060CFB4 = 2;
  dword_1060CFB0 = (int)&unk_1060D074;
  return &dword_1060CFB0;
}

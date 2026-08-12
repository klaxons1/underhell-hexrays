int *sub_100779B0()
{
  if ( (dword_10693220 & 1) == 0 )
  {
    dword_10693220 |= 1u;
    dword_10693204 = (int)"AI_EnemyInfo_t";
    dword_1069320C = 0;
    dword_10693210 = 0;
    dword_10693214 = 0;
    dword_10693218 = 0;
    dword_1069321C = 0;
    dword_10693208 = 14;
    atexit(sub_1046F240);
  }
  dword_10607ED4 = 0;
  dword_10607ECC = 13;
  dword_10607EC8 = (int)&unk_106080BC;
  return &dword_10607EC8;
}

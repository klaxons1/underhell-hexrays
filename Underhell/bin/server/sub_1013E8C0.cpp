int *sub_1013E8C0()
{
  if ( (dword_106B03E4 & 1) == 0 )
  {
    dword_106B03E4 |= 1u;
    dword_106B03C8 = (int)"CFilterEnemy";
    dword_106B03D0 = 0;
    dword_106B03D4 = 0;
    dword_106B03D8 = 0;
    dword_106B03DC = 0;
    dword_106B03E0 = 0;
    dword_106B03CC = 12;
    atexit(sub_10471080);
  }
  dword_106223B0 = (int)&dword_106222FC;
  dword_106223A8 = 5;
  dword_106223A4 = (int)&unk_10622B2C;
  return &dword_106223A4;
}

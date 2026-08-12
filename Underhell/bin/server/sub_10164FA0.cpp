int *sub_10164FA0()
{
  if ( (dword_106B4D94 & 1) == 0 )
  {
    dword_106B4D94 |= 1u;
    dword_106B4D78 = (int)"CFlextalkActor";
    dword_106B4D80 = 0;
    dword_106B4D84 = 0;
    dword_106B4D88 = 0;
    dword_106B4D8C = 0;
    dword_106B4D90 = 0;
    dword_106B4D7C = 14;
    atexit(sub_10471B50);
  }
  dword_106284E8 = (int)&dword_106284C4;
  dword_106284E0 = 11;
  dword_106284DC = (int)&unk_106286DC;
  return &dword_106284DC;
}

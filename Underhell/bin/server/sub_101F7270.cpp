int *sub_101F7270()
{
  if ( (dword_106BD040 & 1) == 0 )
  {
    dword_106BD040 |= 1u;
    dword_106BD024 = (int)"CStripWeapons";
    dword_106BD02C = 0;
    dword_106BD030 = 0;
    dword_106BD034 = 0;
    dword_106BD038 = 0;
    dword_106BD03C = 0;
    dword_106BD028 = 13;
    atexit(sub_104735A0);
  }
  dword_1063C564 = (int)&dword_1060F348;
  dword_1063C55C = 3;
  dword_1063C558 = (int)&unk_1063EB2C;
  return &dword_1063C558;
}

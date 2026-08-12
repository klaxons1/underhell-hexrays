int *sub_10141220()
{
  if ( (dword_106B09E8 & 1) == 0 )
  {
    dword_106B09E8 |= 1u;
    dword_106B09CC = (int)"CFireSmoke";
    dword_106B09D4 = 0;
    dword_106B09D8 = 0;
    dword_106B09DC = 0;
    dword_106B09E0 = 0;
    dword_106B09E4 = 0;
    dword_106B09D0 = 10;
    atexit(sub_104711A0);
  }
  dword_1062363C = (int)&dword_10623614;
  dword_10623634 = 6;
  dword_10623630 = (int)&unk_106237F4;
  return &dword_10623630;
}

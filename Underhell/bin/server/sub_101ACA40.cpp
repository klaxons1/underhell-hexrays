int *sub_101ACA40()
{
  if ( (dword_106B9BB4 & 1) == 0 )
  {
    dword_106B9BB4 |= 1u;
    dword_106B9B98 = (int)"CPathCorner";
    dword_106B9BA0 = 0;
    dword_106B9BA4 = 0;
    dword_106B9BA8 = 0;
    dword_106B9BAC = 0;
    dword_106B9BB0 = 0;
    dword_106B9B9C = 11;
    atexit(sub_10472C10);
  }
  dword_106350AC = (int)&dword_1060F348;
  if ( (dword_106B9BB4 & 2) == 0 )
  {
    dword_106B9BB4 |= 2u;
    dword_10635248 = (int)off_10614A2C;
    dword_1063524C = 0;
    dword_10635250 = 0;
    dword_10635254 = 0;
    dword_10635258 = 0;
    dword_1063525C = 0;
    dword_10635260 = 0;
  }
  dword_106350A4 = 4;
  dword_106350A0 = (int)&unk_10635194;
  return &dword_106350A0;
}

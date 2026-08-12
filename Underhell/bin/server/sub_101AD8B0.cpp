int *sub_101AD8B0()
{
  if ( (dword_106B9BE4 & 1) == 0 )
  {
    dword_106B9BE4 |= 1u;
    dword_106B9BC8 = (int)"CPathTrack";
    dword_106B9BD0 = 0;
    dword_106B9BD4 = 0;
    dword_106B9BD8 = 0;
    dword_106B9BDC = 0;
    dword_106B9BE0 = 0;
    dword_106B9BCC = 10;
    atexit(sub_10472C20);
  }
  dword_10635270 = (int)&dword_1060F348;
  if ( (dword_106B9BE4 & 2) == 0 )
  {
    dword_106B9BE4 |= 2u;
    dword_106355D4 = (int)off_10614A2C;
    dword_106355D8 = 0;
    dword_106355DC = 0;
    dword_106355E0 = 0;
    dword_106355E4 = 0;
    dword_106355E8 = 0;
    dword_106355EC = 0;
  }
  dword_10635268 = 15;
  dword_10635264 = (int)&unk_106352E4;
  return &dword_10635264;
}

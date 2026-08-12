int *sub_10184A80()
{
  if ( (dword_106B6D24 & 1) == 0 )
  {
    dword_106B6D24 |= 1u;
    dword_106B6D08 = (int)"CMessageEntity";
    dword_106B6D10 = 0;
    dword_106B6D14 = 0;
    dword_106B6D18 = 0;
    dword_106B6D1C = 0;
    dword_106B6D20 = 0;
    dword_106B6D0C = 14;
    atexit(sub_10472100);
  }
  dword_10630C44 = (int)&dword_1060F348;
  dword_10630C3C = 7;
  dword_10630C38 = (int)&unk_10630CDC;
  return &dword_10630C38;
}

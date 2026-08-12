int *sub_10161450()
{
  if ( (dword_106B4B90 & 1) == 0 )
  {
    dword_106B4B90 |= 1u;
    dword_106B4B74 = (int)"CPointGamestatsCounter";
    dword_106B4B7C = 0;
    dword_106B4B80 = 0;
    dword_106B4B84 = 0;
    dword_106B4B88 = 0;
    dword_106B4B8C = 0;
    dword_106B4B78 = 22;
    atexit(sub_10471A10);
  }
  dword_10627F98 = (int)&dword_1060F348;
  dword_10627F90 = 6;
  dword_10627F8C = (int)&unk_106280C4;
  return &dword_10627F8C;
}

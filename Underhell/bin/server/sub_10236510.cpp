int *sub_10236510()
{
  if ( (dword_106C4AAC & 1) == 0 )
  {
    dword_106C4AAC |= 1u;
    dword_106C4A90 = (int)"CStopwatch";
    dword_106C4A98 = 0;
    dword_106C4A9C = 0;
    dword_106C4AA0 = 0;
    dword_106C4AA4 = 0;
    dword_106C4AA8 = 0;
    dword_106C4A94 = 10;
    atexit(sub_10473F10);
  }
  dword_1064A9A4 = (int)&dword_1064A980;
  dword_1064A99C = 1;
  dword_1064A998 = (int)&unk_1064ABD4;
  return &dword_1064A998;
}

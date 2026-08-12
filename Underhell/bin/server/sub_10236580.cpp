int *sub_10236580()
{
  if ( (dword_106C4ACC & 1) == 0 )
  {
    dword_106C4ACC |= 1u;
    dword_106C4AB0 = (int)"CRandStopwatch";
    dword_106C4AB8 = 0;
    dword_106C4ABC = 0;
    dword_106C4AC0 = 0;
    dword_106C4AC4 = 0;
    dword_106C4AC8 = 0;
    dword_106C4AB4 = 14;
    atexit(sub_10473F20);
  }
  dword_1064A9BC = (int)&dword_1064A980;
  dword_1064A9B4 = 2;
  dword_1064A9B0 = (int)&unk_1064AC3C;
  return &dword_1064A9B0;
}

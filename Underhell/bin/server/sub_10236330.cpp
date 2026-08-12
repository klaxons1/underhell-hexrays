int *sub_10236330()
{
  if ( (dword_106C4A2C & 1) == 0 )
  {
    dword_106C4A2C |= 1u;
    dword_106C4A10 = (int)"CSimpleSimTimer";
    dword_106C4A18 = 0;
    dword_106C4A1C = 0;
    dword_106C4A20 = 0;
    dword_106C4A24 = 0;
    dword_106C4A28 = 0;
    dword_106C4A14 = 15;
    atexit(sub_10473ED0);
  }
  dword_1064A944 = 0;
  dword_1064A93C = 1;
  dword_1064A938 = (int)&unk_1064A9FC;
  return &dword_1064A938;
}

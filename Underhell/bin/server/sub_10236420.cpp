int *sub_10236420()
{
  if ( (dword_106C4A6C & 1) == 0 )
  {
    dword_106C4A6C |= 1u;
    dword_106C4A50 = (int)"CRandSimTimer";
    dword_106C4A58 = 0;
    dword_106C4A5C = 0;
    dword_106C4A60 = 0;
    dword_106C4A64 = 0;
    dword_106C4A68 = 0;
    dword_106C4A54 = 13;
    atexit(sub_10473EF0);
  }
  dword_1064A974 = (int)&dword_1064A938;
  dword_1064A96C = 2;
  dword_1064A968 = (int)&unk_1064AACC;
  return &dword_1064A968;
}

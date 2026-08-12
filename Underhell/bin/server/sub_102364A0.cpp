int *sub_102364A0()
{
  if ( (dword_106C4A8C & 1) == 0 )
  {
    dword_106C4A8C |= 1u;
    dword_106C4A70 = (int)"CStopwatchBase";
    dword_106C4A78 = 0;
    dword_106C4A7C = 0;
    dword_106C4A80 = 0;
    dword_106C4A84 = 0;
    dword_106C4A88 = 0;
    dword_106C4A74 = 14;
    atexit(sub_10473F00);
  }
  dword_1064A98C = (int)&dword_1064A938;
  dword_1064A984 = 1;
  dword_1064A980 = (int)&unk_1064AB6C;
  return &dword_1064A980;
}

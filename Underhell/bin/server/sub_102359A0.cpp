int *sub_102359A0()
{
  if ( (dword_106C481C & 1) == 0 )
  {
    dword_106C481C |= 1u;
    dword_106C4800 = (int)"CServerNetworkProperty";
    dword_106C4808 = 0;
    dword_106C480C = 0;
    dword_106C4810 = 0;
    dword_106C4814 = 0;
    dword_106C4818 = 0;
    dword_106C4804 = 22;
    atexit(sub_10473E80);
  }
  dword_1064A620 = 0;
  dword_1064A618 = 1;
  dword_1064A614 = (int)asc_1064A6DC;
  return &dword_1064A614;
}

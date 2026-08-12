int *sub_101FCFF0()
{
  if ( (dword_106C0F0C & 1) == 0 )
  {
    dword_106C0F0C |= 1u;
    dword_106C0EF0 = (int)"CPlayerLocalData";
    dword_106C0EF8 = 0;
    dword_106C0EFC = 0;
    dword_106C0F00 = 0;
    dword_106C0F04 = 0;
    dword_106C0F08 = 0;
    dword_106C0EF4 = 16;
    atexit(sub_10473700);
  }
  dword_1063EDC4 = 0;
  dword_1063EDBC = 26;
  dword_1063EDB8 = (int)&unk_1063F7EC;
  return &dword_1063EDB8;
}

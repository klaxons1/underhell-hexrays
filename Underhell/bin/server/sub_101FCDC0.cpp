int *sub_101FCDC0()
{
  if ( (dword_106C0E8C & 1) == 0 )
  {
    dword_106C0E8C |= 1u;
    dword_106C0E70 = (int)"fogparams_t";
    dword_106C0E78 = 0;
    dword_106C0E7C = 0;
    dword_106C0E80 = 0;
    dword_106C0E84 = 0;
    dword_106C0E88 = 0;
    dword_106C0E74 = 11;
    atexit(sub_104736C0);
  }
  dword_1063ED64 = 0;
  dword_1063ED5C = 15;
  dword_1063ED58 = (int)&unk_1063F164;
  return &dword_1063ED58;
}

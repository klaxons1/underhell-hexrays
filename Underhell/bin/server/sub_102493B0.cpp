int *sub_102493B0()
{
  if ( (dword_106C630C & 1) == 0 )
  {
    dword_106C630C |= 1u;
    dword_106C62F0 = (int)"CTankTargetChange";
    dword_106C62F8 = 0;
    dword_106C62FC = 0;
    dword_106C6300 = 0;
    dword_106C6304 = 0;
    dword_106C6308 = 0;
    dword_106C62F4 = 17;
    atexit(sub_10474390);
  }
  dword_1064F13C = (int)&dword_1060F348;
  dword_1064F134 = 1;
  dword_1064F130 = (int)&unk_1064F31C;
  return &dword_1064F130;
}

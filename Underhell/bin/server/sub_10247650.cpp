int *sub_10247650()
{
  if ( (dword_106C6030 & 1) == 0 )
  {
    dword_106C6030 |= 1u;
    dword_106C6014 = (int)"CSun";
    dword_106C601C = 0;
    dword_106C6020 = 0;
    dword_106C6024 = 0;
    dword_106C6028 = 0;
    dword_106C602C = 0;
    dword_106C6018 = 4;
    atexit(sub_104742E0);
  }
  dword_1064E938 = (int)&dword_1060F348;
  dword_1064E930 = 14;
  dword_1064E92C = (int)&unk_1064E9BC;
  return &dword_1064E92C;
}

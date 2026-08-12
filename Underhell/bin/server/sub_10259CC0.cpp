int *sub_10259CC0()
{
  if ( (dword_106C79DC & 1) == 0 )
  {
    dword_106C79DC |= 1u;
    dword_106C79C0 = (int)"CAI_ChangeHintGroup";
    dword_106C79C8 = 0;
    dword_106C79CC = 0;
    dword_106C79D0 = 0;
    dword_106C79D4 = 0;
    dword_106C79D8 = 0;
    dword_106C79C4 = 19;
    atexit(sub_10474800);
  }
  dword_10651648 = (int)&dword_1060F348;
  dword_10651640 = 6;
  dword_1065163C = (int)&unk_1065271C;
  return &dword_1065163C;
}

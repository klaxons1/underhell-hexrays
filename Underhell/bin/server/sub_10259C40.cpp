int *sub_10259C40()
{
  if ( (dword_106C79BC & 1) == 0 )
  {
    dword_106C79BC |= 1u;
    dword_106C79A0 = (int)"CAI_ChangeTarget";
    dword_106C79A8 = 0;
    dword_106C79AC = 0;
    dword_106C79B0 = 0;
    dword_106C79B4 = 0;
    dword_106C79B8 = 0;
    dword_106C79A4 = 16;
    atexit(sub_104747F0);
  }
  dword_10651630 = (int)&dword_1060F348;
  dword_10651628 = 2;
  dword_10651624 = (int)&unk_1065267C;
  return &dword_10651624;
}

int *sub_10073F10()
{
  if ( (dword_106930A8 & 1) == 0 )
  {
    dword_106930A8 |= 1u;
    dword_1069308C = (int)"HintNodeData";
    dword_10693094 = 0;
    dword_10693098 = 0;
    dword_1069309C = 0;
    dword_106930A0 = 0;
    dword_106930A4 = 0;
    dword_10693090 = 12;
    atexit(sub_1046F1D0);
  }
  dword_10607920 = 0;
  dword_10607918 = 11;
  dword_10607914 = (int)&unk_10607A54;
  return &dword_10607914;
}

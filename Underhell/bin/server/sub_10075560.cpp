int *sub_10075560()
{
  if ( (dword_1069311C & 1) == 0 )
  {
    dword_1069311C |= 1u;
    dword_10693100 = (int)"CAI_LocalNavigator";
    dword_10693108 = 0;
    dword_1069310C = 0;
    dword_10693110 = 0;
    dword_10693114 = 0;
    dword_10693118 = 0;
    dword_10693104 = 18;
    atexit(sub_1046F210);
  }
  dword_10607D04 = 0;
  dword_10607CFC = 1;
  dword_10607CF8 = (int)&unk_106930CC;
  return &dword_10607CF8;
}

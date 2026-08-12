int *sub_1004F5D0()
{
  if ( (dword_10691E9C & 1) == 0 )
  {
    dword_10691E9C |= 1u;
    dword_10691E80 = (int)"CAI_AssaultBehavior";
    dword_10691E88 = 0;
    dword_10691E8C = 0;
    dword_10691E90 = 0;
    dword_10691E94 = 0;
    dword_10691E98 = 0;
    dword_10691E84 = 19;
    atexit(sub_1046EBD0);
  }
  dword_10601DAC = (int)&dword_10601D54;
  dword_10601DA4 = 10;
  dword_10601DA0 = (int)&unk_10602674;
  return &dword_10601DA0;
}

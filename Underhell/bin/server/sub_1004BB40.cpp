int *sub_1004BB40()
{
  if ( (dword_10691E3C & 1) == 0 )
  {
    dword_10691E3C |= 1u;
    dword_10691E20 = (int)"CAI_BehaviorBase";
    dword_10691E28 = 0;
    dword_10691E2C = 0;
    dword_10691E30 = 0;
    dword_10691E34 = 0;
    dword_10691E38 = 0;
    dword_10691E24 = 16;
    atexit(sub_1046EB90);
  }
  dword_10601D60 = 0;
  dword_10601D58 = 1;
  dword_10601D54 = (int)&unk_10691DEC;
  return &dword_10601D54;
}

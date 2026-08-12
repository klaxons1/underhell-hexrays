int *sub_102A9690()
{
  if ( (dword_106DB850 & 1) == 0 )
  {
    dword_106DB850 |= 1u;
    dword_106DB834 = (int)"CAI_PolicingBehavior";
    dword_106DB83C = 0;
    dword_106DB840 = 0;
    dword_106DB844 = 0;
    dword_106DB848 = 0;
    dword_106DB84C = 0;
    dword_106DB838 = 20;
    atexit(sub_104766E0);
  }
  dword_1065F638 = (int)&dword_10601D54;
  dword_1065F630 = 8;
  dword_1065F62C = (int)&unk_1065F694;
  return &dword_1065F62C;
}

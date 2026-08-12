int *sub_102A7D80()
{
  if ( (dword_106DB830 & 1) == 0 )
  {
    dword_106DB830 |= 1u;
    dword_106DB814 = (int)"CAI_PassengerBehaviorZombie";
    dword_106DB81C = 0;
    dword_106DB820 = 0;
    dword_106DB824 = 0;
    dword_106DB828 = 0;
    dword_106DB82C = 0;
    dword_106DB818 = 27;
    atexit(sub_104766D0);
  }
  dword_1065F4C8 = (int)&dword_1065EAB4;
  dword_1065F4C0 = 3;
  dword_1065F4BC = (int)&unk_1065F564;
  return &dword_1065F4BC;
}

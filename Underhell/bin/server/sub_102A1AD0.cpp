int *sub_102A1AD0()
{
  if ( (dword_106DB5D0 & 1) == 0 )
  {
    dword_106DB5D0 |= 1u;
    dword_106DB5B4 = (int)"CAI_PassengerBehavior";
    dword_106DB5BC = 0;
    dword_106DB5C0 = 0;
    dword_106DB5C4 = 0;
    dword_106DB5C8 = 0;
    dword_106DB5CC = 0;
    dword_106DB5B8 = 21;
    atexit(sub_10476660);
  }
  dword_1065EAC0 = (int)&dword_10601D54;
  dword_1065EAB8 = 13;
  dword_1065EAB4 = (int)asc_1065EB54;
  return &dword_1065EAB4;
}

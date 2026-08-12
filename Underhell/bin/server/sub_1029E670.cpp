int *sub_1029E670()
{
  if ( (dword_106DB448 & 1) == 0 )
  {
    dword_106DB448 |= 1u;
    dword_106DB42C = (int)"CAI_OperatorBehavior";
    dword_106DB434 = 0;
    dword_106DB438 = 0;
    dword_106DB43C = 0;
    dword_106DB440 = 0;
    dword_106DB444 = 0;
    dword_106DB430 = 20;
    atexit(sub_10476620);
  }
  dword_1065E6BC = (int)&dword_10601D54;
  dword_1065E6B4 = 4;
  dword_1065E6B0 = (int)asc_1065E7A4;
  return &dword_1065E6B0;
}

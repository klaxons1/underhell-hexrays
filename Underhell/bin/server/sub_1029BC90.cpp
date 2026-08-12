int *sub_1029BC90()
{
  if ( (dword_106DB2E8 & 1) == 0 )
  {
    dword_106DB2E8 |= 1u;
    dword_106DB2CC = (int)"CAI_BehaviorAlyxInjured";
    dword_106DB2D4 = 0;
    dword_106DB2D8 = 0;
    dword_106DB2DC = 0;
    dword_106DB2E0 = 0;
    dword_106DB2E4 = 0;
    dword_106DB2D0 = 23;
    atexit(sub_104765E0);
  }
  dword_1065E3A4 = (int)&dword_10602B70;
  dword_1065E39C = 1;
  dword_1065E398 = (int)&unk_1065E474;
  return &dword_1065E398;
}

int *sub_1029BD00()
{
  if ( (dword_106DB33C & 1) == 0 )
  {
    dword_106DB33C |= 1u;
    dword_106DB320 = (int)"CAI_InjuredFollowGoal";
    dword_106DB328 = 0;
    dword_106DB32C = 0;
    dword_106DB330 = 0;
    dword_106DB334 = 0;
    dword_106DB338 = 0;
    dword_106DB324 = 21;
    atexit(sub_104765F0);
  }
  dword_1065E3C8 = (int)&dword_10602B88;
  dword_1065E3C0 = 1;
  dword_1065E3BC = (int)&unk_106DB2EC;
  return &dword_1065E3BC;
}

int *sub_10055A50()
{
  if ( (dword_106920A4 & 1) == 0 )
  {
    dword_106920A4 |= 1u;
    dword_10692088 = (int)"CAI_FollowGoal";
    dword_10692090 = 0;
    dword_10692094 = 0;
    dword_10692098 = 0;
    dword_1069209C = 0;
    dword_106920A0 = 0;
    dword_1069208C = 14;
    atexit(sub_1046EC50);
  }
  dword_10602B94 = (int)&dword_10606FD0;
  dword_10602B8C = 2;
  dword_10602B88 = (int)&unk_10603D0C;
  return &dword_10602B88;
}

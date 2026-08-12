int *sub_1004FA10()
{
  if ( (dword_10691EBC & 1) == 0 )
  {
    dword_10691EBC |= 1u;
    dword_10691EA0 = (int)"CAI_AssaultGoal";
    dword_10691EA8 = 0;
    dword_10691EAC = 0;
    dword_10691EB0 = 0;
    dword_10691EB4 = 0;
    dword_10691EB8 = 0;
    dword_10691EA4 = 15;
    atexit(sub_1046EBE0);
  }
  dword_10601DC4 = (int)&dword_10606FD0;
  dword_10601DBC = 4;
  dword_10601DB8 = (int)&unk_106028B4;
  return &dword_10601DB8;
}

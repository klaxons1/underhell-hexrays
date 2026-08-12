int *sub_10060110()
{
  if ( (dword_10692454 & 1) == 0 )
  {
    dword_10692454 |= 1u;
    dword_10692438 = (int)"CAI_StandoffGoal";
    dword_10692440 = 0;
    dword_10692444 = 0;
    dword_10692448 = 0;
    dword_1069244C = 0;
    dword_10692450 = 0;
    dword_1069243C = 16;
    atexit(sub_1046ED40);
  }
  dword_10605838 = (int)&dword_10606FD0;
  dword_10605830 = 12;
  dword_1060582C = (int)&unk_10606144;
  return &dword_1060582C;
}

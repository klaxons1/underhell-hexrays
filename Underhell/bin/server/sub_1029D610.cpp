int *sub_1029D610()
{
  if ( (dword_106DB3D0 & 1) == 0 )
  {
    dword_106DB3D0 |= 1u;
    dword_106DB3B4 = (int)"CAI_HolsterBehavior";
    dword_106DB3BC = 0;
    dword_106DB3C0 = 0;
    dword_106DB3C4 = 0;
    dword_106DB3C8 = 0;
    dword_106DB3CC = 0;
    dword_106DB3B8 = 19;
    atexit(sub_10476610);
  }
  dword_1065E62C = (int)&dword_10601D54;
  dword_1065E624 = 1;
  dword_1065E620 = (int)&unk_1065E67C;
  return &dword_1065E620;
}

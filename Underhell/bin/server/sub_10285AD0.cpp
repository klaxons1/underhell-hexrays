int *sub_10285AD0()
{
  if ( (dword_106D4044 & 1) == 0 )
  {
    dword_106D4044 |= 1u;
    dword_106D4028 = (int)"SporeExplosion";
    dword_106D4030 = 0;
    dword_106D4034 = 0;
    dword_106D4038 = 0;
    dword_106D403C = 0;
    dword_106D4040 = 0;
    dword_106D402C = 14;
    atexit(sub_10475740);
  }
  dword_1065A9C4 = (int)&dword_1060F348;
  dword_1065A9BC = 10;
  dword_1065A9B8 = (int)&unk_1065B454;
  return &dword_1065A9B8;
}

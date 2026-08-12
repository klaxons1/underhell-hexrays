int *sub_10285D10()
{
  if ( (dword_106D4064 & 1) == 0 )
  {
    dword_106D4064 |= 1u;
    dword_106D4048 = (int)"CFireTrail";
    dword_106D4050 = 0;
    dword_106D4054 = 0;
    dword_106D4058 = 0;
    dword_106D405C = 0;
    dword_106D4060 = 0;
    dword_106D404C = 10;
    atexit(sub_10475750);
  }
  dword_1065A9DC = (int)&dword_1060F348;
  dword_1065A9D4 = 2;
  dword_1065A9D0 = (int)&unk_1065B694;
  return &dword_1065A9D0;
}

int *sub_10282280()
{
  if ( (dword_106D2320 & 1) == 0 )
  {
    dword_106D2320 |= 1u;
    dword_106D2304 = (int)"CWorld";
    dword_106D230C = 0;
    dword_106D2310 = 0;
    dword_106D2314 = 0;
    dword_106D2318 = 0;
    dword_106D231C = 0;
    dword_106D2308 = 6;
    atexit(sub_104754D0);
  }
  dword_10659DE4 = (int)&dword_1060F348;
  dword_10659DDC = 12;
  dword_10659DD8 = (int)&unk_1065A244;
  return &dword_10659DD8;
}

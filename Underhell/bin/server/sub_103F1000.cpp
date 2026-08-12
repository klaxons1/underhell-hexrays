int *sub_103F1000()
{
  if ( (dword_106EEA1C & 1) == 0 )
  {
    dword_106EEA1C |= 1u;
    dword_106EEA00 = (int)"CRadarTarget";
    dword_106EEA08 = 0;
    dword_106EEA0C = 0;
    dword_106EEA10 = 0;
    dword_106EEA14 = 0;
    dword_106EEA18 = 0;
    dword_106EEA04 = 12;
    atexit(sub_104793F0);
  }
  dword_1068347C = (int)&dword_1060F348;
  dword_10683474 = 6;
  dword_10683470 = (int)&unk_1068366C;
  return &dword_10683470;
}

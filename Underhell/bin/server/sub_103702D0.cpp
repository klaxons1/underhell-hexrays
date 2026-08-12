int *sub_103702D0()
{
  if ( (dword_106E8498 & 1) == 0 )
  {
    dword_106E8498 |= 1u;
    dword_106E847C = (int)"CFastHeadcrab";
    dword_106E8484 = 0;
    dword_106E8488 = 0;
    dword_106E848C = 0;
    dword_106E8490 = 0;
    dword_106E8494 = 0;
    dword_106E8480 = 13;
    atexit(sub_104782E0);
  }
  dword_106739EC = (int)&dword_106739C8;
  dword_106739E4 = 5;
  dword_106739E0 = (int)&unk_106740F4;
  return &dword_106739E0;
}

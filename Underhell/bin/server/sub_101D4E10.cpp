int *sub_101D4E10()
{
  if ( (dword_106BAEE0 & 1) == 0 )
  {
    dword_106BAEE0 |= 1u;
    dword_106BAEC4 = (int)"PhysObjectHeader_t";
    dword_106BAECC = 0;
    dword_106BAED0 = 0;
    dword_106BAED4 = 0;
    dword_106BAED8 = 0;
    dword_106BAEDC = 0;
    dword_106BAEC8 = 18;
    atexit(sub_10473140);
  }
  dword_1063AC7C = 0;
  dword_1063AC74 = 9;
  dword_1063AC70 = (int)&unk_1063ADB4;
  return &dword_1063AC70;
}

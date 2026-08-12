int *sub_101D4D90()
{
  if ( (dword_106BAEC0 & 1) == 0 )
  {
    dword_106BAEC0 |= 1u;
    dword_106BAEA4 = (int)"PhysBlockHeader_t";
    dword_106BAEAC = 0;
    dword_106BAEB0 = 0;
    dword_106BAEB4 = 0;
    dword_106BAEB8 = 0;
    dword_106BAEBC = 0;
    dword_106BAEA8 = 17;
    atexit(sub_10473130);
  }
  dword_1063AC64 = 0;
  dword_1063AC5C = 2;
  dword_1063AC58 = (int)&unk_1063AD14;
  return &dword_1063AC58;
}

int *sub_1026D660()
{
  if ( (dword_106CEEC4 & 1) == 0 )
  {
    dword_106CEEC4 |= 1u;
    dword_106CEEA8 = (int)"CPassengerInfo";
    dword_106CEEB0 = 0;
    dword_106CEEB4 = 0;
    dword_106CEEB8 = 0;
    dword_106CEEBC = 0;
    dword_106CEEC0 = 0;
    dword_106CEEAC = 14;
    atexit(sub_10474AE0);
  }
  dword_1065498C = 0;
  dword_10654984 = 3;
  dword_10654980 = (int)&unk_10654EFC;
  return &dword_10654980;
}

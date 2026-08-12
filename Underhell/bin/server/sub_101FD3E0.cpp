int *sub_101FD3E0()
{
  if ( (dword_106C0F68 & 1) == 0 )
  {
    dword_106C0F68 |= 1u;
    dword_106C0F4C = (int)"CPointBonusMapsAccessor";
    dword_106C0F54 = 0;
    dword_106C0F58 = 0;
    dword_106C0F5C = 0;
    dword_106C0F60 = 0;
    dword_106C0F64 = 0;
    dword_106C0F50 = 23;
    atexit(sub_10473720);
  }
  dword_1063FD8C = (int)&dword_1060F348;
  dword_1063FD84 = 5;
  dword_1063FD80 = (int)&unk_1063FE34;
  return &dword_1063FD80;
}

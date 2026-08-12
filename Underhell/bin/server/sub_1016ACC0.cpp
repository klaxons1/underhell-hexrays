int *sub_1016ACC0()
{
  if ( (dword_106B5270 & 1) == 0 )
  {
    dword_106B5270 |= 1u;
    dword_106B5254 = (int)"CBlendingCycler";
    dword_106B525C = 0;
    dword_106B5260 = 0;
    dword_106B5264 = 0;
    dword_106B5268 = 0;
    dword_106B526C = 0;
    dword_106B5258 = 15;
    atexit(sub_10471C90);
  }
  dword_1062920C = (int)&dword_106291B4;
  dword_10629204 = 5;
  dword_10629200 = (int)&unk_1062959C;
  return &dword_10629200;
}

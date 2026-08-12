int *sub_100F21C0()
{
  if ( (dword_106989D8 & 1) == 0 )
  {
    dword_106989D8 |= 1u;
    dword_106989BC = (int)"flexsettinghdr_t";
    dword_106989C4 = 0;
    dword_106989C8 = 0;
    dword_106989CC = 0;
    dword_106989D0 = 0;
    dword_106989D4 = 0;
    dword_106989C0 = 16;
    atexit(sub_10470010);
  }
  dword_10611684 = 0;
  dword_1061167C = 12;
  dword_10611678 = (int)&unk_10611A1C;
  return &dword_10611678;
}

int *sub_10120400()
{
  if ( (dword_10437804 & 1) == 0 )
  {
    dword_10437804 |= 1u;
    dword_104377E8 = (int)"CStopwatch";
    dword_104377F0 = 0;
    dword_104377F4 = 0;
    dword_104377F8 = 0;
    dword_104377FC = 0;
    dword_10437800 = 0;
    dword_104377EC = 10;
    atexit(sub_102CB7B0);
  }
  dword_103E53CC = (int)&dword_103E53A8;
  dword_103E53C4 = 1;
  dword_103E53C0 = (int)&unk_103E55FC;
  return &dword_103E53C0;
}

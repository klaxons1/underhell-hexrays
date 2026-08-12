int *sub_100FC8C0()
{
  if ( (dword_10436140 & 1) == 0 )
  {
    dword_10436140 |= 1u;
    dword_10436124 = (int)"PhysObjectHeader_t";
    dword_1043612C = 0;
    dword_10436130 = 0;
    dword_10436134 = 0;
    dword_10436138 = 0;
    dword_1043613C = 0;
    dword_10436128 = 18;
    atexit(sub_102CB290);
  }
  dword_103E1DC4 = 0;
  dword_103E1DBC = 9;
  dword_103E1DB8 = (int)&unk_103E1F4C;
  return &dword_103E1DB8;
}

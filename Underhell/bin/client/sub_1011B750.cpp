int *sub_1011B750()
{
  if ( (dword_104375A8 & 1) == 0 )
  {
    dword_104375A8 |= 1u;
    dword_1043758C = (int)"entitytable_t";
    dword_10437594 = 0;
    dword_10437598 = 0;
    dword_1043759C = 0;
    dword_104375A0 = 0;
    dword_104375A4 = 0;
    dword_10437590 = 13;
    atexit(sub_102CB670);
  }
  dword_103E4648 = 0;
  dword_103E4640 = 10;
  dword_103E463C = (int)&unk_103E4874;
  return &dword_103E463C;
}

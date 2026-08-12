int *sub_1009E820()
{
  if ( (dword_1042DFD8 & 1) == 0 )
  {
    dword_1042DFD8 |= 1u;
    dword_1042DFBC = (int)"C_FuncLadder";
    dword_1042DFC4 = 0;
    dword_1042DFC8 = 0;
    dword_1042DFCC = 0;
    dword_1042DFD0 = 0;
    dword_1042DFD4 = 0;
    dword_1042DFC0 = 12;
    atexit(sub_102C98B0);
  }
  dword_103DFF98 = (int)&dword_103D8A64;
  dword_103DFF90 = 5;
  dword_103DFF8C = (int)&unk_103E004C;
  return &dword_103DFF8C;
}

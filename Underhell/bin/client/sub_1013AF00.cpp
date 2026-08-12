int *sub_1013AF00()
{
  if ( (dword_1043A1A0 & 1) == 0 )
  {
    dword_1043A1A0 |= 1u;
    dword_1043A184 = (int)"screenfade_t";
    dword_1043A18C = 0;
    dword_1043A190 = 0;
    dword_1043A194 = 0;
    dword_1043A198 = 0;
    dword_1043A19C = 0;
    dword_1043A188 = 12;
    atexit(sub_102CBDA0);
  }
  dword_103E77C4 = 0;
  dword_103E77BC = 8;
  dword_103E77B8 = (int)&unk_103E78EC;
  return &dword_103E77B8;
}

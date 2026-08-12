int *sub_1013AF80()
{
  if ( (dword_1043A1C0 & 1) == 0 )
  {
    dword_1043A1C0 |= 1u;
    dword_1043A1A4 = (int)"screenshake_t";
    dword_1043A1AC = 0;
    dword_1043A1B0 = 0;
    dword_1043A1B4 = 0;
    dword_1043A1B8 = 0;
    dword_1043A1BC = 0;
    dword_1043A1A8 = 13;
    atexit(sub_102CBDB0);
  }
  dword_103E77DC = 0;
  dword_103E77D4 = 7;
  dword_103E77D0 = (int)&unk_103E7AC4;
  return &dword_103E77D0;
}

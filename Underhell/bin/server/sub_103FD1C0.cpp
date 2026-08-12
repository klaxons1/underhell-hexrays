int *sub_103FD1C0()
{
  if ( (dword_106F02E8 & 1) == 0 )
  {
    dword_106F02E8 |= 1u;
    dword_106F02CC = (int)"CGrabController";
    dword_106F02D4 = 0;
    dword_106F02D8 = 0;
    dword_106F02DC = 0;
    dword_106F02E0 = 0;
    dword_106F02E4 = 0;
    dword_106F02D0 = 15;
    atexit(sub_10479900);
  }
  dword_10685628 = 0;
  dword_10685620 = 18;
  dword_1068561C = (int)&unk_10685A5C;
  return &dword_1068561C;
}

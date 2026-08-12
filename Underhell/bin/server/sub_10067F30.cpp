int *sub_10067F30()
{
  if ( (dword_10692DF0 & 1) == 0 )
  {
    dword_10692DF0 |= 1u;
    dword_10692DD4 = (int)"AI_ResponseParams";
    dword_10692DDC = 0;
    dword_10692DE0 = 0;
    dword_10692DE4 = 0;
    dword_10692DE8 = 0;
    dword_10692DEC = 0;
    dword_10692DD8 = 17;
    atexit(sub_1046F0C0);
  }
  dword_106063E4 = 0;
  dword_106063DC = 5;
  dword_106063D8 = (int)&unk_1060643C;
  return &dword_106063D8;
}

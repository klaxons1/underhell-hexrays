int *sub_10202B20()
{
  if ( (dword_106C19D8 & 1) == 0 )
  {
    dword_106C19D8 |= 1u;
    dword_106C19BC = (int)"template_t";
    dword_106C19C4 = 0;
    dword_106C19C8 = 0;
    dword_106C19CC = 0;
    dword_106C19D0 = 0;
    dword_106C19D4 = 0;
    dword_106C19C0 = 10;
    atexit(sub_10473820);
  }
  dword_10641090 = 0;
  dword_10641088 = 2;
  dword_10641084 = (int)&unk_1064121C;
  return &dword_10641084;
}

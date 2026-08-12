int *sub_100FCA90()
{
  if ( (dword_1069A4D8 & 1) == 0 )
  {
    dword_1069A4D8 |= 1u;
    dword_1069A4BC = (int)"CFuncConveyor";
    dword_1069A4C4 = 0;
    dword_1069A4C8 = 0;
    dword_1069A4CC = 0;
    dword_1069A4D0 = 0;
    dword_1069A4D4 = 0;
    dword_1069A4C0 = 13;
    atexit(sub_10470250);
  }
  dword_10613050 = (int)&dword_10612FFC;
  dword_10613048 = 4;
  dword_10613044 = (int)&unk_1061348C;
  return &dword_10613044;
}

int *sub_10185460()
{
  if ( (dword_106B6D7C & 1) == 0 )
  {
    dword_106B6D7C |= 1u;
    dword_106B6D60 = (int)"CFuncBrush";
    dword_106B6D68 = 0;
    dword_106B6D6C = 0;
    dword_106B6D70 = 0;
    dword_106B6D74 = 0;
    dword_106B6D78 = 0;
    dword_106B6D64 = 10;
    atexit(sub_10472110);
  }
  dword_10630E54 = (int)&dword_1060F348;
  dword_10630E4C = 10;
  dword_10630E48 = (int)&unk_106310D4;
  return &dword_10630E48;
}

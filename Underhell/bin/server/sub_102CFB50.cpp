int *sub_102CFB50()
{
  if ( (dword_106DE4E4 & 1) == 0 )
  {
    dword_106DE4E4 |= 1u;
    dword_106DE4C8 = (int)"CFuncTankPhysCannister";
    dword_106DE4D0 = 0;
    dword_106DE4D4 = 0;
    dword_106DE4D8 = 0;
    dword_106DE4DC = 0;
    dword_106DE4E0 = 0;
    dword_106DE4CC = 22;
    atexit(sub_10476C80);
  }
  dword_10662E14 = (int)&dword_10662D44;
  dword_10662E0C = 2;
  dword_10662E08 = (int)&unk_106639F4;
  return &dword_10662E08;
}

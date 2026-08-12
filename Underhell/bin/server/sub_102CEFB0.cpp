int *sub_102CEFB0()
{
  if ( (dword_106DE444 & 1) == 0 )
  {
    dword_106DE444 |= 1u;
    dword_106DE428 = (int)"CFuncTankLaser";
    dword_106DE430 = 0;
    dword_106DE434 = 0;
    dword_106DE438 = 0;
    dword_106DE43C = 0;
    dword_106DE440 = 0;
    dword_106DE42C = 14;
    atexit(sub_10476C20);
  }
  dword_10662D80 = (int)&dword_10662D44;
  dword_10662D78 = 3;
  dword_10662D74 = (int)&unk_106633D4;
  return &dword_10662D74;
}

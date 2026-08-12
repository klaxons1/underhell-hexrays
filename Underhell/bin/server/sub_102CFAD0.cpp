int *sub_102CFAD0()
{
  if ( (dword_106DE4C4 & 1) == 0 )
  {
    dword_106DE4C4 |= 1u;
    dword_106DE4A8 = (int)"CFuncTankMortar";
    dword_106DE4B0 = 0;
    dword_106DE4B4 = 0;
    dword_106DE4B8 = 0;
    dword_106DE4BC = 0;
    dword_106DE4C0 = 0;
    dword_106DE4AC = 15;
    atexit(sub_10476C70);
  }
  dword_10662DFC = (int)&dword_10662D44;
  dword_10662DF4 = 10;
  dword_10662DF0 = (int)&unk_106637B4;
  return &dword_10662DF0;
}

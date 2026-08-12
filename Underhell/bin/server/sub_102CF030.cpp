int *sub_102CF030()
{
  if ( (dword_106DE464 & 1) == 0 )
  {
    dword_106DE464 |= 1u;
    dword_106DE448 = (int)"CFuncTankRocket";
    dword_106DE450 = 0;
    dword_106DE454 = 0;
    dword_106DE458 = 0;
    dword_106DE45C = 0;
    dword_106DE460 = 0;
    dword_106DE44C = 15;
    atexit(sub_10476C30);
  }
  dword_10662D98 = (int)&dword_10662D44;
  dword_10662D90 = 1;
  dword_10662D8C = (int)&unk_106634A4;
  return &dword_10662D8C;
}

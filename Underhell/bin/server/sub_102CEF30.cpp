int *sub_102CEF30()
{
  if ( (dword_106DE424 & 1) == 0 )
  {
    dword_106DE424 |= 1u;
    dword_106DE408 = (int)"CFuncTankPulseLaser";
    dword_106DE410 = 0;
    dword_106DE414 = 0;
    dword_106DE418 = 0;
    dword_106DE41C = 0;
    dword_106DE420 = 0;
    dword_106DE40C = 19;
    atexit(sub_10476C10);
  }
  dword_10662D68 = (int)&dword_10662D44;
  dword_10662D60 = 6;
  dword_10662D5C = (int)&unk_10663264;
  return &dword_10662D5C;
}

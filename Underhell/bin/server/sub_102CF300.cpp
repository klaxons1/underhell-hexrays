int *sub_102CF300()
{
  if ( (dword_106DE4A4 & 1) == 0 )
  {
    dword_106DE4A4 |= 1u;
    dword_106DE488 = (int)"CFuncTankAPCRocket";
    dword_106DE490 = 0;
    dword_106DE494 = 0;
    dword_106DE498 = 0;
    dword_106DE49C = 0;
    dword_106DE4A0 = 0;
    dword_106DE48C = 18;
    atexit(sub_10476C50);
  }
  dword_10662DC8 = (int)&dword_10662D44;
  dword_10662DC0 = 6;
  dword_10662DBC = (int)&unk_10663644;
  return &dword_10662DBC;
}

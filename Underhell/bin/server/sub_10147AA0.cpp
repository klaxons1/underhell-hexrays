int *sub_10147AA0()
{
  if ( (dword_106B12D8 & 1) == 0 )
  {
    dword_106B12D8 |= 1u;
    dword_106B12BC = (int)"CFourWheelVehiclePhysics";
    dword_106B12C4 = 0;
    dword_106B12C8 = 0;
    dword_106B12CC = 0;
    dword_106B12D0 = 0;
    dword_106B12D4 = 0;
    dword_106B12C0 = 24;
    atexit(sub_104712C0);
  }
  dword_10624718 = 0;
  dword_10624710 = 37;
  dword_1062470C = (int)&unk_10624784;
  return &dword_1062470C;
}

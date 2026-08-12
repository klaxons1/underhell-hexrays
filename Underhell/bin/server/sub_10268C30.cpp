int *sub_10268C30()
{
  if ( (dword_106CECFC & 1) == 0 )
  {
    dword_106CECFC |= 1u;
    dword_106CECE0 = (int)"CFourWheelServerVehicle";
    dword_106CECE8 = 0;
    dword_106CECEC = 0;
    dword_106CECF0 = 0;
    dword_106CECF4 = 0;
    dword_106CECF8 = 0;
    dword_106CECE4 = 23;
    atexit(sub_10474A40);
  }
  dword_10653D38 = (int)&dword_10654998;
  dword_10653D30 = 1;
  dword_10653D2C = (int)asc_10653F0C;
  return &dword_10653D2C;
}

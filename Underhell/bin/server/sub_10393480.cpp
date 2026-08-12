int *sub_10393480()
{
  if ( (dword_106EA1D0 & 1) == 0 )
  {
    dword_106EA1D0 |= 1u;
    dword_106EA1B4 = (int)"CNPC_Monk";
    dword_106EA1BC = 0;
    dword_106EA1C0 = 0;
    dword_106EA1C4 = 0;
    dword_106EA1C8 = 0;
    dword_106EA1CC = 0;
    dword_106EA1B8 = 9;
    atexit(sub_10478850);
  }
  dword_10677374 = (int)&dword_10609D78;
  dword_1067736C = 6;
  dword_10677368 = (int)&unk_106773F4;
  return &dword_10677368;
}

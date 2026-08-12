int *sub_1039A3D0()
{
  if ( (dword_106EA418 & 1) == 0 )
  {
    dword_106EA418 |= 1u;
    dword_106EA3FC = (int)"CNPC_PlayerCompanion";
    dword_106EA404 = 0;
    dword_106EA408 = 0;
    dword_106EA40C = 0;
    dword_106EA410 = 0;
    dword_106EA414 = 0;
    dword_106EA400 = 20;
    atexit(sub_104788B0);
  }
  dword_106775BC = (int)&dword_10609D78;
  if ( (dword_106EA418 & 2) == 0 )
  {
    dword_106EA418 |= 2u;
    dword_10677D98 = (int)off_10614A2C;
    dword_10677D9C = 0;
    dword_10677DA0 = 0;
    dword_10677DA4 = 0;
    dword_10677DA8 = 0;
    dword_10677DAC = 0;
    dword_10677DB0 = 0;
  }
  dword_106775B4 = 36;
  dword_106775B0 = (int)&unk_10677664;
  return &dword_106775B0;
}

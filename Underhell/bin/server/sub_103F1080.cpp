int *sub_103F1080()
{
  if ( (dword_106EEA3C & 1) == 0 )
  {
    dword_106EEA3C |= 1u;
    dword_106EEA20 = (int)"CVehicleCargoTrigger";
    dword_106EEA28 = 0;
    dword_106EEA2C = 0;
    dword_106EEA30 = 0;
    dword_106EEA34 = 0;
    dword_106EEA38 = 0;
    dword_106EEA24 = 20;
    atexit(sub_10479400);
  }
  dword_10683494 = (int)&dword_1060F348;
  if ( (dword_106EEA3C & 2) == 0 )
  {
    dword_106EEA3C |= 2u;
    dword_10683848 = (int)sub_100390B0((char **)&dword_106EEA20, "CargoTouch");
    dword_1068384C = 0;
    dword_10683850 = 0;
    dword_10683854 = 2097153;
    dword_10683858 = 0;
    dword_1068385C = 0;
    dword_10683860 = (int)sub_103F0950;
    dword_10683864 = 0;
    dword_10683868 = 0;
    dword_1068386C = 0;
    dword_10683870 = 0;
    dword_10683874 = 0;
  }
  dword_1068348C = 3;
  dword_10683488 = (int)&unk_106837DC;
  return &dword_10683488;
}

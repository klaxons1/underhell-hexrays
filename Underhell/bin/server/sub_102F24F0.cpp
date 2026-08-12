int *sub_102F24F0()
{
  if ( (dword_106E25D8 & 1) == 0 )
  {
    dword_106E25D8 |= 1u;
    dword_106E25BC = (int)"CLookDoorThinker";
    dword_106E25C4 = 0;
    dword_106E25C8 = 0;
    dword_106E25CC = 0;
    dword_106E25D0 = 0;
    dword_106E25D4 = 0;
    dword_106E25C0 = 16;
    atexit(sub_10477690);
  }
  dword_10669864 = (int)&dword_1060F348;
  if ( (dword_106E25D8 & 2) == 0 )
  {
    dword_106E25D8 |= 2u;
    dword_10669994 = (int)sub_100390B0((char **)&dword_106E25BC, "LookThink");
    dword_10669998 = 0;
    dword_1066999C = 0;
    dword_106699A0 = 2097153;
    dword_106699A4 = 0;
    dword_106699A8 = 0;
    dword_106699AC = (int)sub_102F2270;
    dword_106699B0 = 0;
    dword_106699B4 = 0;
    dword_106699B8 = 0;
    dword_106699BC = 0;
    dword_106699C0 = 0;
  }
  dword_1066985C = 2;
  dword_10669858 = (int)asc_1066995C;
  return &dword_10669858;
}

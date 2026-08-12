int *sub_103DD0B0()
{
  if ( (dword_106ED420 & 1) == 0 )
  {
    dword_106ED420 |= 1u;
    dword_106ED404 = (int)"CSniperBullet";
    dword_106ED40C = 0;
    dword_106ED410 = 0;
    dword_106ED414 = 0;
    dword_106ED418 = 0;
    dword_106ED41C = 0;
    dword_106ED408 = 13;
    atexit(sub_10479100);
  }
  dword_1067FA34 = (int)&dword_1060F348;
  if ( (dword_106ED420 & 2) == 0 )
  {
    dword_106ED420 |= 2u;
    dword_10680718 = (int)sub_100390B0((char **)&dword_106ED404, "BulletThink");
    dword_1068071C = 0;
    dword_10680720 = 0;
    dword_10680724 = 2097153;
    dword_10680728 = 0;
    dword_1068072C = 0;
    dword_10680730 = (int)sub_103DA1D0;
    dword_10680734 = 0;
    dword_10680738 = 0;
    dword_1068073C = 0;
    dword_10680740 = 0;
    dword_10680744 = 0;
  }
  dword_1067FA2C = 13;
  dword_1067FA28 = (int)&unk_106804A4;
  return &dword_1067FA28;
}

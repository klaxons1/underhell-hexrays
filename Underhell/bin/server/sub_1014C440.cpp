int *sub_1014C440()
{
  if ( (dword_106B1B70 & 1) == 0 )
  {
    dword_106B1B70 |= 1u;
    dword_106B1B54 = (int)"CWindowPane";
    dword_106B1B5C = 0;
    dword_106B1B60 = 0;
    dword_106B1B64 = 0;
    dword_106B1B68 = 0;
    dword_106B1B6C = 0;
    dword_106B1B58 = 11;
    atexit(sub_104713E0);
  }
  dword_10625D84 = (int)&dword_1060D0FC;
  if ( (dword_106B1B70 & 2) == 0 )
  {
    dword_106B1B70 |= 2u;
    dword_106B1AF0 = (int)sub_100390B0((char **)&dword_106B1B54, "Die");
    dword_106B1AF4 = 0;
    dword_106B1AF8 = 0;
    dword_106B1AFC = 2097153;
    dword_106B1B00 = 0;
    dword_106B1B04 = 0;
    dword_106B1B08 = (int)sub_1014AEA0;
    dword_106B1B0C = 0;
    dword_106B1B10 = 0;
    dword_106B1B14 = 0;
    dword_106B1B18 = 0;
    dword_106B1B1C = 0;
    dword_106B1B20 = 0;
    dword_106B1B24 = (int)sub_100390B0((char **)&dword_106B1B54, "PaneTouch");
    dword_106B1B28 = 0;
    dword_106B1B2C = 0;
    dword_106B1B30 = 2097153;
    dword_106B1B34 = 0;
    dword_106B1B38 = 0;
    dword_106B1B3C = (int)sub_1014B5A0;
    dword_106B1B40 = 0;
    dword_106B1B44 = 0;
    dword_106B1B48 = 0;
    dword_106B1B4C = 0;
    dword_106B1B50 = 0;
  }
  dword_10625D7C = 2;
  dword_10625D78 = (int)&unk_106B1AEC;
  return &dword_10625D78;
}

int *sub_10272D50()
{
  if ( (dword_106CFB58 & 1) == 0 )
  {
    dword_106CFB58 |= 1u;
    dword_106CFB3C = (int)"CWaterBullet";
    dword_106CFB44 = 0;
    dword_106CFB48 = 0;
    dword_106CFB4C = 0;
    dword_106CFB50 = 0;
    dword_106CFB54 = 0;
    dword_106CFB40 = 12;
    atexit(sub_10474C00);
  }
  dword_10656144 = (int)&dword_1060D0FC;
  if ( (dword_106CFB58 & 2) == 0 )
  {
    dword_106CFB58 |= 2u;
    dword_106CFAD8 = (int)sub_100390B0((char **)&dword_106CFB3C, "Touch");
    dword_106CFADC = 0;
    dword_106CFAE0 = 0;
    dword_106CFAE4 = 2097153;
    dword_106CFAE8 = 0;
    dword_106CFAEC = 0;
    dword_106CFAF0 = (int)sub_10272970;
    dword_106CFAF4 = 0;
    dword_106CFAF8 = 0;
    dword_106CFAFC = 0;
    dword_106CFB00 = 0;
    dword_106CFB04 = 0;
    dword_106CFB08 = 0;
    dword_106CFB0C = (int)sub_100390B0((char **)&dword_106CFB3C, "BulletThink");
    dword_106CFB10 = 0;
    dword_106CFB14 = 0;
    dword_106CFB18 = 2097153;
    dword_106CFB1C = 0;
    dword_106CFB20 = 0;
    dword_106CFB24 = (int)sub_10272980;
    dword_106CFB28 = 0;
    dword_106CFB2C = 0;
    dword_106CFB30 = 0;
    dword_106CFB34 = 0;
    dword_106CFB38 = 0;
  }
  dword_1065613C = 2;
  dword_10656138 = (int)&unk_106CFAD4;
  return &dword_10656138;
}

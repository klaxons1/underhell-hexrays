int *sub_100F3520()
{
  if ( (dword_10698D60 & 1) == 0 )
  {
    dword_10698D60 |= 1u;
    dword_10698D44 = (int)"CBaseGrenadeConcussion";
    dword_10698D4C = 0;
    dword_10698D50 = 0;
    dword_10698D54 = 0;
    dword_10698D58 = 0;
    dword_10698D5C = 0;
    dword_10698D48 = 22;
    atexit(sub_10470050);
  }
  dword_10612088 = (int)&dword_106121C8;
  if ( (dword_10698D60 & 2) == 0 )
  {
    dword_10698D60 |= 2u;
    dword_10698CE0 = (int)sub_100390B0((char **)&dword_10698D44, "FallThink");
    dword_10698CE4 = 0;
    dword_10698CE8 = 0;
    dword_10698CEC = 2097153;
    dword_10698CF0 = 0;
    dword_10698CF4 = 0;
    dword_10698CF8 = (int)sub_100F2F50;
    dword_10698CFC = 0;
    dword_10698D00 = 0;
    dword_10698D04 = 0;
    dword_10698D08 = 0;
    dword_10698D0C = 0;
    dword_10698D10 = 0;
    dword_10698D14 = (int)sub_100390B0((char **)&dword_10698D44, "ExplodeConcussion");
    dword_10698D18 = 0;
    dword_10698D1C = 0;
    dword_10698D20 = 2097153;
    dword_10698D24 = 0;
    dword_10698D28 = 0;
    dword_10698D2C = (int)sub_100F3260;
    dword_10698D30 = 0;
    dword_10698D34 = 0;
    dword_10698D38 = 0;
    dword_10698D3C = 0;
    dword_10698D40 = 0;
  }
  dword_10612080 = 2;
  dword_1061207C = (int)&unk_10698CDC;
  return &dword_1061207C;
}

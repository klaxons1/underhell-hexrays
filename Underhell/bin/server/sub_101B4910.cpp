int *sub_101B4910()
{
  if ( (dword_106B9D60 & 1) == 0 )
  {
    dword_106B9D60 |= 1u;
    dword_106B9D44 = (int)"CPhysHinge";
    dword_106B9D4C = 0;
    dword_106B9D50 = 0;
    dword_106B9D54 = 0;
    dword_106B9D58 = 0;
    dword_106B9D5C = 0;
    dword_106B9D48 = 10;
    atexit(sub_10472D00);
  }
  dword_106363CC = (int)&dword_106363A8;
  if ( (dword_106B9D60 & 2) == 0 )
  {
    dword_106B9D60 |= 2u;
    dword_10636F70 = (int)sub_100390B0((char **)&dword_106B9D44, "SoundThink");
    dword_10636F74 = 0;
    dword_10636F78 = 0;
    dword_10636F7C = 2097153;
    dword_10636F80 = 0;
    dword_10636F84 = 0;
    dword_10636F88 = (int)sub_101B2710;
    dword_10636F8C = 0;
    dword_10636F90 = 0;
    dword_10636F94 = 0;
    dword_10636F98 = 0;
    dword_10636F9C = 0;
  }
  dword_106363C4 = 17;
  dword_106363C0 = (int)&unk_10636C2C;
  return &dword_106363C0;
}

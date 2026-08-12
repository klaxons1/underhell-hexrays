int *sub_1036EA80()
{
  if ( (dword_106E8458 & 1) == 0 )
  {
    dword_106E8458 |= 1u;
    dword_106E843C = (int)"CBlackHeadcrab";
    dword_106E8444 = 0;
    dword_106E8448 = 0;
    dword_106E844C = 0;
    dword_106E8450 = 0;
    dword_106E8454 = 0;
    dword_106E8440 = 14;
    atexit(sub_104782C0);
  }
  dword_10673A04 = (int)&dword_106739C8;
  if ( (dword_106E8458 & 2) == 0 )
  {
    dword_106E8458 |= 2u;
    dword_10673BAC = (int)sub_100390B0((char **)&dword_106E843C, "EjectTouch");
    dword_10673BB0 = 0;
    dword_10673BB4 = 0;
    dword_10673BB8 = 2097153;
    dword_10673BBC = 0;
    dword_10673BC0 = 0;
    dword_10673BC4 = (int)sub_1036BF10;
    dword_10673BC8 = 0;
    dword_10673BCC = 0;
    dword_10673BD0 = 0;
    dword_10673BD4 = 0;
    dword_10673BD8 = 0;
  }
  dword_106739FC = 4;
  dword_106739F8 = (int)&unk_10673B0C;
  return &dword_106739F8;
}

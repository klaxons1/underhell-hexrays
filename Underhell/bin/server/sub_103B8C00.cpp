int *sub_103B8C00()
{
  if ( (dword_106EBB0C & 1) == 0 )
  {
    dword_106EBB0C |= 1u;
    dword_106EBAF0 = (int)"CSparkTrail";
    dword_106EBAF8 = 0;
    dword_106EBAFC = 0;
    dword_106EBB00 = 0;
    dword_106EBB04 = 0;
    dword_106EBB08 = 0;
    dword_106EBAF4 = 11;
    atexit(sub_10478CE0);
  }
  dword_10679DF4 = (int)&dword_1060F348;
  if ( (dword_106EBB0C & 2) == 0 )
  {
    dword_106EBB0C |= 2u;
    dword_106EBAC0 = (int)sub_100390B0((char **)&dword_106EBAF0, "SparkThink");
    dword_106EBAC4 = 0;
    dword_106EBAC8 = 0;
    dword_106EBACC = 2097153;
    dword_106EBAD0 = 0;
    dword_106EBAD4 = 0;
    dword_106EBAD8 = (int)sub_103B7370;
    dword_106EBADC = 0;
    dword_106EBAE0 = 0;
    dword_106EBAE4 = 0;
    dword_106EBAE8 = 0;
    dword_106EBAEC = 0;
  }
  dword_10679DEC = 1;
  dword_10679DE8 = (int)&unk_106EBABC;
  return &dword_10679DE8;
}

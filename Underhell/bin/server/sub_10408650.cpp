int *sub_10408650()
{
  if ( (dword_106F05E0 & 1) == 0 )
  {
    dword_106F05E0 |= 1u;
    dword_106F05C4 = (int)"CLaserDot";
    dword_106F05CC = 0;
    dword_106F05D0 = 0;
    dword_106F05D4 = 0;
    dword_106F05D8 = 0;
    dword_106F05DC = 0;
    dword_106F05C8 = 9;
    atexit(sub_10479A60);
  }
  dword_106867E0 = (int)&dword_1064DB24;
  if ( (dword_106F05E0 & 2) == 0 )
  {
    dword_106F05E0 |= 2u;
    dword_10686F48 = (int)sub_100390B0((char **)&dword_106F05C4, "LaserThink");
    dword_10686F4C = 0;
    dword_10686F50 = 0;
    dword_10686F54 = 2097153;
    dword_10686F58 = 0;
    dword_10686F5C = 0;
    dword_10686F60 = (int)sub_10405F40;
    dword_10686F64 = 0;
    dword_10686F68 = 0;
    dword_10686F6C = 0;
    dword_10686F70 = 0;
    dword_10686F74 = 0;
  }
  dword_106867D8 = 5;
  dword_106867D4 = (int)&unk_10686E74;
  return &dword_106867D4;
}

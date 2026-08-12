int *sub_1024C4D0()
{
  if ( (dword_106C6A50 & 1) == 0 )
  {
    dword_106C6A50 |= 1u;
    dword_106C6A34 = (int)"CTesla";
    dword_106C6A3C = 0;
    dword_106C6A40 = 0;
    dword_106C6A44 = 0;
    dword_106C6A48 = 0;
    dword_106C6A4C = 0;
    dword_106C6A38 = 6;
    atexit(sub_10474480);
  }
  dword_1064F9AC = (int)&dword_1060F348;
  if ( (dword_106C6A50 & 2) == 0 )
  {
    dword_106C6A50 |= 2u;
    dword_1064FDB4 = (int)sub_100390B0((char **)&dword_106C6A34, "ShootArcThink");
    dword_1064FDB8 = 0;
    dword_1064FDBC = 0;
    dword_1064FDC0 = 2097153;
    dword_1064FDC4 = 0;
    dword_1064FDC8 = 0;
    dword_1064FDCC = (int)sub_1024C250;
    dword_1064FDD0 = 0;
    dword_1064FDD4 = 0;
    dword_1064FDD8 = 0;
    dword_1064FDDC = 0;
    dword_1064FDE0 = 0;
  }
  dword_1064F9A4 = 18;
  dword_1064F9A0 = (int)&unk_1064FA3C;
  return &dword_1064F9A0;
}

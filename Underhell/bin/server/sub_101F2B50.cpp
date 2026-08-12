int *sub_101F2B50()
{
  if ( (dword_106BCFE0 & 1) == 0 )
  {
    dword_106BCFE0 |= 1u;
    dword_106BCFC4 = (int)"CRevertSaved";
    dword_106BCFCC = 0;
    dword_106BCFD0 = 0;
    dword_106BCFD4 = 0;
    dword_106BCFD8 = 0;
    dword_106BCFDC = 0;
    dword_106BCFC8 = 12;
    atexit(sub_104735B0);
  }
  dword_1063C57C = (int)&dword_1060F348;
  if ( (dword_106BCFE0 & 2) == 0 )
  {
    dword_106BCFE0 |= 2u;
    dword_1063CA78 = (int)sub_100390B0((char **)&dword_106BCFC4, "LoadThink");
    dword_1063CA7C = 0;
    dword_1063CA80 = 0;
    dword_1063CA84 = 2097153;
    dword_1063CA88 = 0;
    dword_1063CA8C = 0;
    dword_1063CA90 = (int)sub_101E33A0;
    dword_1063CA94 = 0;
    dword_1063CA98 = 0;
    dword_1063CA9C = 0;
    dword_1063CAA0 = 0;
    dword_1063CAA4 = 0;
  }
  dword_1063C574 = 5;
  dword_1063C570 = (int)&unk_1063C9A4;
  return &dword_1063C570;
}

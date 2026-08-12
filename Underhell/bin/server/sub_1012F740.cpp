int *sub_1012F740()
{
  if ( (dword_106AEF94 & 1) == 0 )
  {
    dword_106AEF94 |= 1u;
    dword_106AEF78 = (int)"CEnvEffectsScript";
    dword_106AEF80 = 0;
    dword_106AEF84 = 0;
    dword_106AEF88 = 0;
    dword_106AEF8C = 0;
    dword_106AEF90 = 0;
    dword_106AEF7C = 17;
    atexit(sub_10470D30);
  }
  dword_1061E3AC = (int)&dword_1060D0FC;
  if ( (dword_106AEF94 & 2) == 0 )
  {
    dword_106AEF94 |= 2u;
    dword_1061E4B0 = (int)sub_100390B0((char **)&dword_106AEF78, "Think");
    dword_1061E4B4 = 0;
    dword_1061E4B8 = 0;
    dword_1061E4BC = 2097153;
    dword_1061E4C0 = 0;
    dword_1061E4C4 = 0;
    dword_1061E4C8 = (int)sub_103D79E0;
    dword_1061E4CC = 0;
    dword_1061E4D0 = 0;
    dword_1061E4D4 = 0;
    dword_1061E4D8 = 0;
    dword_1061E4DC = 0;
  }
  dword_1061E3A4 = 3;
  dword_1061E3A0 = (int)&unk_1061E444;
  return &dword_1061E3A0;
}

int *sub_1024D4A0()
{
  if ( (dword_106C7224 & 1) == 0 )
  {
    dword_106C7224 |= 1u;
    dword_106C7208 = (int)"CTestTraceline";
    dword_106C7210 = 0;
    dword_106C7214 = 0;
    dword_106C7218 = 0;
    dword_106C721C = 0;
    dword_106C7220 = 0;
    dword_106C720C = 14;
    atexit(sub_10474610);
  }
  dword_1064FF24 = (int)&dword_1060F348;
  if ( (dword_106C7224 & 2) == 0 )
  {
    dword_106C7224 |= 2u;
    dword_106C71D8 = (int)sub_100390B0((char **)&dword_106C7208, "Spin");
    dword_106C71DC = 0;
    dword_106C71E0 = 0;
    dword_106C71E4 = 2097153;
    dword_106C71E8 = 0;
    dword_106C71EC = 0;
    dword_106C71F0 = (int)sub_1024D3A0;
    dword_106C71F4 = 0;
    dword_106C71F8 = 0;
    dword_106C71FC = 0;
    dword_106C7200 = 0;
    dword_106C7204 = 0;
  }
  dword_1064FF1C = 1;
  dword_1064FF18 = (int)&unk_106C71D4;
  return &dword_1064FF18;
}

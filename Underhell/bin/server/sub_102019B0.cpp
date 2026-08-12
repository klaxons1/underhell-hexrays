int *sub_102019B0()
{
  if ( (dword_106C19A4 & 1) == 0 )
  {
    dword_106C19A4 |= 1u;
    dword_106C1988 = (int)"CPointSpotlight";
    dword_106C1990 = 0;
    dword_106C1994 = 0;
    dword_106C1998 = 0;
    dword_106C199C = 0;
    dword_106C19A0 = 0;
    dword_106C198C = 15;
    atexit(sub_104737F0);
  }
  dword_10640CAC = (int)&dword_1060F348;
  if ( (dword_106C19A4 & 2) == 0 )
  {
    dword_106C19A4 |= 2u;
    dword_10641004 = 0;
    dword_10641008 = 0;
    dword_1064100C = 0;
    dword_10641010 = 0;
    dword_10641014 = 0;
    dword_10641018 = 0;
    word_1064102C = 1;
    dword_10641000 = (int)off_10614A2C;
    dword_10641034 = (int)off_10614A2C;
    dword_1064101C = 11;
    dword_10641020 = (int)"m_OnOff";
    dword_10641024 = 896;
    dword_10641028 = 0;
    word_1064102E = 22;
    dword_10641030 = (int)"OnLightOff";
    dword_10641038 = 0;
    dword_1064103C = 0;
    dword_10641040 = 0;
    dword_10641044 = 0;
    dword_10641048 = 0;
    dword_1064104C = 0;
    dword_10641050 = 0;
    dword_10641054 = (int)sub_100390B0((char **)&dword_106C1988, "SpotlightThink");
    dword_10641058 = 0;
    dword_1064105C = 0;
    dword_10641060 = 2097153;
    dword_10641064 = 0;
    dword_10641068 = 0;
    dword_1064106C = (int)sub_10201920;
    dword_10641070 = 0;
    dword_10641074 = 0;
    dword_10641078 = 0;
    dword_1064107C = 0;
    dword_10641080 = 0;
  }
  dword_10640CA4 = 16;
  dword_10640CA0 = (int)&unk_10640D44;
  return &dword_10640CA0;
}

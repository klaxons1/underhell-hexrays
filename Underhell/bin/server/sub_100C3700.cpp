int *sub_100C3700()
{
  if ( (dword_10695FC4 & 1) == 0 )
  {
    dword_10695FC4 |= 1u;
    dword_10695FA8 = (int)"CBaseAnimating";
    dword_10695FB0 = 0;
    dword_10695FB4 = 0;
    dword_10695FB8 = 0;
    dword_10695FBC = 0;
    dword_10695FC0 = 0;
    dword_10695FAC = 14;
    atexit(sub_1046F8D0);
  }
  dword_1060D108 = (int)&dword_1060F348;
  if ( (dword_10695FC4 & 2) == 0 )
  {
    dword_10695FC4 |= 2u;
    flt_1060DB34 = 0.0;
    dword_1060DA80 = (int)off_10614A2C;
    flt_1060DB68 = 0.0;
    dword_1060DA84 = 0;
    dword_1060DA88 = 0;
    dword_1060DA8C = 0;
    dword_1060DA90 = 0;
    dword_1060DA94 = 0;
    dword_1060DA98 = 0;
    word_1060DAAE = 14;
    dword_1060DAC4 = 0;
    dword_1060DAC8 = 0;
    dword_1060DACC = 0;
    word_1060DAE0 = 1;
    word_1060DAE2 = 14;
    word_1060DAAC = 1;
    dword_1060DAF8 = 0;
    dword_1060DAFC = 0;
    dword_1060DB00 = 0;
    dword_1060DAC0 = 4;
    dword_1060DAF4 = 4;
    word_1060DB14 = 1;
    dword_1060DB28 = 4;
    dword_1060DA9C = 1;
    dword_1060DAA0 = (int)"m_fadeMinDist";
    dword_1060DAA4 = 1064;
    dword_1060DAA8 = 0;
    dword_1060DAB0 = (int)"fademindist";
    dword_1060DAB4 = 0;
    dword_1060DAB8 = 0;
    dword_1060DABC = 0;
    dword_1060DAD0 = 1;
    dword_1060DAD4 = (int)"m_fadeMaxDist";
    dword_1060DAD8 = 1068;
    dword_1060DADC = 0;
    dword_1060DAE4 = (int)"fademaxdist";
    dword_1060DAE8 = 0;
    dword_1060DAEC = 0;
    dword_1060DAF0 = 0;
    dword_1060DB04 = 1;
    dword_1060DB08 = (int)"m_flFadeScale";
    dword_1060DB0C = 1072;
    dword_1060DB10 = 0;
    word_1060DB16 = 6;
    dword_1060DB18 = (int)"fadescale";
    dword_1060DB1C = 0;
    dword_1060DB20 = 0;
    dword_1060DB24 = 0;
    dword_1060DB2C = 0;
    dword_1060DB30 = 0;
    dword_1060DB38 = 7;
    dword_1060DB3C = (int)"m_fBoneCacheFlags";
    dword_1060DB40 = 1060;
    dword_1060DB44 = 0;
    word_1060DB48 = 1;
    word_1060DB4A = 2;
    dword_1060DB4C = 0;
    dword_1060DB50 = 0;
    dword_1060DB54 = 0;
    dword_1060DB58 = 0;
    dword_1060DB5C = 2;
    dword_1060DB60 = 0;
    dword_1060DB64 = 0;
  }
  dword_1060D100 = 40;
  dword_1060D0FC = (int)&unk_1060D34C;
  return &dword_1060D0FC;
}

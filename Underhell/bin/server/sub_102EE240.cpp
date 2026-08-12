int *sub_102EE240()
{
  if ( (dword_106E1F80 & 1) == 0 )
  {
    dword_106E1F80 |= 1u;
    dword_106E1F64 = (int)"CItem_AmmoCrate";
    dword_106E1F6C = 0;
    dword_106E1F70 = 0;
    dword_106E1F74 = 0;
    dword_106E1F78 = 0;
    dword_106E1F7C = 0;
    dword_106E1F68 = 15;
    atexit(sub_104775F0);
  }
  dword_10668570 = (int)&dword_1060D0FC;
  if ( (dword_106E1F80 & 2) == 0 )
  {
    dword_106E1F80 |= 2u;
    dword_10668D50 = (int)off_10614A2C;
    word_10668D7C = 1;
    dword_10668D54 = 0;
    dword_10668D58 = 0;
    dword_10668D5C = 0;
    dword_10668D60 = 0;
    dword_10668D64 = 0;
    dword_10668D68 = 0;
    dword_10668D6C = 0;
    dword_10668D70 = (int)"InputKill";
    dword_10668D74 = 0;
    dword_10668D78 = 0;
    word_10668D7E = 8;
    dword_10668D80 = (int)"Kill";
    dword_10668D84 = 0;
    dword_10668D88 = (int)sub_102F16E0;
    dword_10668D8C = 0;
    dword_10668D90 = 0;
    dword_10668D94 = 0;
    dword_10668D98 = 0;
    dword_10668D9C = 0;
    dword_10668DA0 = 0;
    dword_10668DA4 = (int)sub_100390B0((char **)&dword_106E1F64, "CrateThink");
    dword_10668DA8 = 0;
    dword_10668DAC = 0;
    dword_10668DB0 = 2097153;
    dword_10668DB4 = 0;
    dword_10668DB8 = 0;
    dword_10668DBC = (int)sub_102ECFE0;
    dword_10668DC0 = 0;
    dword_10668DC4 = 0;
    dword_10668DC8 = 0;
    dword_10668DCC = 0;
    dword_10668DD0 = 0;
  }
  dword_10668568 = 6;
  dword_10668564 = (int)&unk_10668C9C;
  return &dword_10668564;
}

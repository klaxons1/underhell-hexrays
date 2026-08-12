int *sub_10327CD0()
{
  if ( (dword_106E54B0 & 1) == 0 )
  {
    dword_106E54B0 |= 1u;
    dword_106E5494 = (int)"CNPC_Barney";
    dword_106E549C = 0;
    dword_106E54A0 = 0;
    dword_106E54A4 = 0;
    dword_106E54A8 = 0;
    dword_106E54AC = 0;
    dword_106E5498 = 11;
    atexit(sub_10477C30);
  }
  dword_1066DB44 = (int)&dword_106775B0;
  if ( (dword_106E54B0 & 2) == 0 )
  {
    dword_106E54B0 |= 2u;
    dword_1066DBE4 = (int)off_10614A2C;
    dword_1066DBE8 = 0;
    dword_1066DBEC = 0;
    dword_1066DBF0 = 0;
    dword_1066DBF4 = 0;
    dword_1066DBF8 = 0;
    dword_1066DBFC = 0;
    dword_1066DC00 = 0;
    dword_1066DC04 = (int)sub_100390B0((char **)&dword_106E5494, "UseFunc");
    dword_1066DC08 = 0;
    dword_1066DC0C = 0;
    dword_1066DC10 = 2097153;
    dword_1066DC14 = 0;
    dword_1066DC18 = 0;
    dword_1066DC1C = (int)sub_10327AA0;
    dword_1066DC20 = 0;
    dword_1066DC24 = 0;
    dword_1066DC28 = 0;
    dword_1066DC2C = 0;
    dword_1066DC30 = 0;
  }
  dword_1066DB3C = 2;
  dword_1066DB38 = (int)&unk_1066DBCC;
  return &dword_1066DB38;
}

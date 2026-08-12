int *sub_1029B040()
{
  if ( (dword_106DB1BC & 1) == 0 )
  {
    dword_106DB1BC |= 1u;
    dword_106DB1A0 = (int)"CAI_ActBusyGoal";
    dword_106DB1A8 = 0;
    dword_106DB1AC = 0;
    dword_106DB1B0 = 0;
    dword_106DB1B4 = 0;
    dword_106DB1B8 = 0;
    dword_106DB1A4 = 15;
    atexit(sub_10476580);
  }
  dword_1065D1A0 = (int)&dword_10606FD0;
  if ( (dword_106DB1BC & 2) == 0 )
  {
    dword_106DB1BC |= 2u;
    dword_1065DB60 = 0;
    dword_1065DB64 = 0;
    dword_1065DB68 = 0;
    dword_1065DB6C = 0;
    dword_1065DB70 = 0;
    dword_1065DB74 = 0;
    word_1065DB88 = 1;
    word_1065DB8A = 22;
    dword_1065DB94 = 0;
    dword_1065DB98 = 0;
    dword_1065DB9C = 0;
    dword_1065DBA0 = 0;
    dword_1065DBA4 = 0;
    dword_1065DBA8 = 0;
    word_1065DBBC = 1;
    word_1065DBBE = 22;
    dword_1065DBC8 = 0;
    dword_1065DBCC = 0;
    dword_1065DBD0 = 0;
    dword_1065DBD4 = 0;
    dword_1065DBD8 = 0;
    dword_1065DBDC = 0;
    word_1065DBF0 = 1;
    word_1065DBF2 = 22;
    dword_1065DB5C = (int)off_10614A2C;
    dword_1065DB78 = 11;
    dword_1065DB7C = (int)"m_OnNPCFinishedBusy";
    dword_1065DB80 = 908;
    dword_1065DB84 = 0;
    dword_1065DB8C = (int)"OnNPCFinishedBusy";
    dword_1065DB90 = (int)off_10614A2C;
    dword_1065DBAC = 11;
    dword_1065DBB0 = (int)"m_OnNPCLeft";
    dword_1065DBB4 = 932;
    dword_1065DBB8 = 0;
    dword_1065DBC0 = (int)"OnNPCLeft";
    dword_1065DBC4 = (int)off_10614A2C;
    dword_1065DBE0 = 11;
    dword_1065DBE4 = (int)"m_OnNPCLostSeeEntity";
    dword_1065DBE8 = 956;
    dword_1065DBEC = 0;
    dword_1065DBF4 = (int)"OnNPCLostSeeEntity";
    dword_1065DBF8 = (int)off_10614A2C;
    dword_1065DBFC = 0;
    dword_1065DC00 = 0;
    dword_1065DC04 = 0;
    dword_1065DC08 = 0;
    dword_1065DC0C = 0;
    dword_1065DC10 = 0;
    dword_1065DC14 = 11;
    dword_1065DC18 = (int)"m_OnNPCSeeEnemy";
    dword_1065DC1C = 980;
    dword_1065DC20 = 0;
    dword_1065DC24 = 1441793;
    dword_1065DC28 = (int)"OnNPCSeeEnemy";
    dword_1065DC2C = (int)off_10614A2C;
    dword_1065DC30 = 0;
    dword_1065DC34 = 0;
    dword_1065DC38 = 0;
    dword_1065DC3C = 0;
    dword_1065DC40 = 0;
    dword_1065DC44 = 0;
  }
  dword_1065D198 = 17;
  dword_1065D194 = (int)&unk_1065D8D4;
  return &dword_1065D194;
}

int *sub_103819C0()
{
  if ( (dword_106E99E8 & 1) == 0 )
  {
    dword_106E99E8 |= 1u;
    dword_106E99CC = (int)"CNPC_Launcher";
    dword_106E99D4 = 0;
    dword_106E99D8 = 0;
    dword_106E99DC = 0;
    dword_106E99E0 = 0;
    dword_106E99E4 = 0;
    dword_106E99D0 = 13;
    atexit(sub_10478700);
  }
  dword_106754B0 = (int)&dword_105FE114;
  if ( (dword_106E99E8 & 2) == 0 )
  {
    dword_106E99E8 |= 2u;
    dword_10675B74 = (int)off_10614A2C;
    dword_10675B78 = 0;
    dword_10675B7C = 0;
    dword_10675B80 = 0;
    dword_10675B84 = 0;
    dword_10675B88 = 0;
    dword_10675B8C = 0;
    dword_10675B90 = 0;
    dword_10675B94 = (int)sub_100390B0((char **)&dword_106E99CC, "LauncherThink");
    dword_10675B98 = 0;
    dword_10675B9C = 0;
    dword_10675BA0 = 2097153;
    dword_10675BA4 = 0;
    dword_10675BA8 = 0;
    dword_10675BAC = (int)sub_103816A0;
    dword_10675BB0 = 0;
    dword_10675BB4 = 0;
    dword_10675BB8 = 0;
    dword_10675BBC = 0;
    dword_10675BC0 = 0;
  }
  dword_106754A8 = 32;
  dword_106754A4 = (int)&unk_10675544;
  return &dword_106754A4;
}

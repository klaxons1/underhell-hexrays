int sub_10129260()
{
  int v1[15]; // [esp-40h] [ebp-84h] BYREF
  int v2[15]; // [esp+8h] [ebp-3Ch] BYREF

  if ( (dword_10438698 & 1) == 0 )
  {
    dword_10438698 |= 1u;
    sub_1009AED0((int)&unk_10438350, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AED0((int)&unk_1043838C, (int)"m_iRoundState", 40, 4, 0, (int (__cdecl *)(int, int, int))sub_10129220);
    sub_10116070((int)&unk_104383C8, (int)"m_bInWaitingForPlayers", 56, 1);
    sub_1009AED0((int)&unk_10438404, (int)"m_iWinningTeam", 48, 4, 0, 0);
    sub_1009AED0((int)&unk_10438440, (int)"m_bInOvertime", 44, 1, 0, 0);
    sub_1009AED0((int)&unk_1043847C, (int)"m_bInSetup", 45, 1, 0, 0);
    sub_1009AED0((int)&unk_104384B8, (int)"m_bSwitchedTeamsThisRound", 46, 1, 0, 0);
    sub_10116070((int)&unk_104384F4, (int)"m_bAwaitingReadyRestart", 57, 1);
    sub_101160A0((int)&unk_10438530, (int)"m_flRestartRoundTime", 60, 4);
    sub_101160A0((int)&unk_1043856C, (int)"m_flMapResetTime", 64, 4);
    qmemcpy(v1, (const void *)sub_101160A0((int)v2, (int)"m_flNextRespawnWave[0]", 68, 4), sizeof(v1));
    sub_1009AF50(
      (int)&unk_104385A8,
      (int)"m_flNextRespawnWave",
      68,
      4,
      32,
      v1[0],
      v1[1],
      v1[2],
      v1[3],
      v1[4],
      v1[5],
      v1[6],
      v1[7],
      v1[8],
      v1[9],
      v1[10],
      v1[11],
      v1[12],
      v1[13],
      v1[14],
      (int)sub_1009AE70);
    qmemcpy(
      v1,
      (const void *)sub_1009AC40((int)v2, (int)"m_TeamRespawnWaveTimes[0]", 232, 4, 0, (int)sub_1009ADC0),
      sizeof(v1));
    sub_1009AF50(
      (int)&unk_104385E4,
      (int)"m_TeamRespawnWaveTimes",
      232,
      4,
      32,
      v1[0],
      v1[1],
      v1[2],
      v1[3],
      v1[4],
      v1[5],
      v1[6],
      v1[7],
      v1[8],
      v1[9],
      v1[10],
      v1[11],
      v1[12],
      v1[13],
      v1[14],
      (int)sub_1009AE70);
    qmemcpy(v1, (const void *)sub_10116070((int)v2, (int)"m_bTeamReady[0]", 196, 1), sizeof(v1));
    sub_1009AF50(
      (int)&unk_10438620,
      (int)"m_bTeamReady",
      196,
      1,
      32,
      v1[0],
      v1[1],
      v1[2],
      v1[3],
      v1[4],
      v1[5],
      v1[6],
      v1[7],
      v1[8],
      v1[9],
      v1[10],
      v1[11],
      v1[12],
      v1[13],
      v1[14],
      (int)sub_1009AE70);
    sub_10116070((int)&unk_1043865C, (int)"m_bStopWatch", 228, 1);
  }
  sub_1009AC10(dword_104386A0, (int)&unk_1043838C, 13, (int)"DT_TeamplayRoundBasedRules");
  return 1;
}

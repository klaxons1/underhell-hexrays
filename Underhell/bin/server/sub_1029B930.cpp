int *sub_1029B930()
{
  if ( (dword_106DB1DC & 1) == 0 )
  {
    dword_106DB1DC |= 1u;
    dword_106DB1C0 = (int)"CAI_ActBusyQueueGoal";
    dword_106DB1C8 = 0;
    dword_106DB1CC = 0;
    dword_106DB1D0 = 0;
    dword_106DB1D4 = 0;
    dword_106DB1D8 = 0;
    dword_106DB1C4 = 20;
    atexit(sub_10476590);
  }
  dword_1065D1B8 = (int)&dword_1065D194;
  if ( (dword_106DB1DC & 2) == 0 )
  {
    dword_106DB1DC |= 2u;
    dword_1065E2B0 = 0;
    dword_1065E2B4 = 0;
    dword_1065E2B8 = 0;
    dword_1065E2BC = 0;
    dword_1065E2C0 = 0;
    dword_1065E2C4 = 0;
    word_1065E2D8 = 1;
    word_1065E2DA = 22;
    dword_1065E2E4 = 0;
    dword_1065E2E8 = 0;
    dword_1065E2EC = 0;
    dword_1065E2F0 = 0;
    dword_1065E2F4 = 0;
    dword_1065E2F8 = 0;
    dword_1065E2C8 = 11;
    dword_1065E2FC = 11;
    word_1065E30E = 22;
    dword_1065E2AC = (int)off_10614A2C;
    dword_1065E2E0 = (int)off_10614A2C;
    dword_1065E314 = (int)off_10614A2C;
    dword_1065E2CC = (int)"m_OnNPCLeftQueue";
    dword_1065E2D0 = 1228;
    dword_1065E2D4 = 0;
    dword_1065E2DC = (int)"OnNPCLeftQueue";
    dword_1065E300 = (int)"m_OnNPCStartedLeavingQueue";
    dword_1065E304 = 1252;
    dword_1065E308 = 0;
    word_1065E30C = 1;
    dword_1065E310 = (int)"OnNPCStartedLeavingQueue";
    dword_1065E318 = 0;
    dword_1065E31C = 0;
    dword_1065E320 = 0;
    dword_1065E324 = 0;
    dword_1065E328 = 0;
    dword_1065E32C = 0;
    dword_1065E330 = 0;
    dword_1065E334 = (int)sub_100390B0((char **)&dword_106DB1C0, "QueueThink");
    word_1065E340 = 1;
    dword_1065E338 = 0;
    dword_1065E33C = 0;
    word_1065E342 = 32;
    dword_1065E344 = 0;
    dword_1065E348 = 0;
    dword_1065E34C = (int)sub_1029B3A0;
    dword_1065E350 = 0;
    dword_1065E354 = 0;
    dword_1065E358 = 0;
    dword_1065E35C = 0;
    dword_1065E360 = 0;
    dword_1065E364 = 0;
    dword_1065E368 = (int)sub_100390B0((char **)&dword_106DB1C0, "MoveQueueUpThink");
    dword_1065E36C = 0;
    dword_1065E370 = 0;
    dword_1065E374 = 2097153;
    dword_1065E378 = 0;
    dword_1065E37C = 0;
    dword_1065E380 = (int)sub_1029AEF0;
    dword_1065E384 = 0;
    dword_1065E388 = 0;
    dword_1065E38C = 0;
    dword_1065E390 = 0;
    dword_1065E394 = 0;
  }
  dword_1065D1B0 = 35;
  dword_1065D1AC = (int)&unk_1065DC7C;
  return &dword_1065D1AC;
}

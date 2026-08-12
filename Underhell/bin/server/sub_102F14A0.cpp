int *sub_102F14A0()
{
  if ( (dword_106E2498 & 1) == 0 )
  {
    dword_106E2498 |= 1u;
    dword_106E247C = (int)"CNewWallHealth";
    dword_106E2484 = 0;
    dword_106E2488 = 0;
    dword_106E248C = 0;
    dword_106E2490 = 0;
    dword_106E2494 = 0;
    dword_106E2480 = 14;
    atexit(sub_10477670);
  }
  dword_10668F88 = (int)&dword_1060D0FC;
  if ( (dword_106E2498 & 2) == 0 )
  {
    dword_106E2498 |= 2u;
    dword_10669528 = (int)sub_100390B0((char **)&dword_106E247C, "Off");
    word_10669534 = 1;
    word_10669536 = 32;
    dword_1066952C = 0;
    dword_10669530 = 0;
    dword_10669538 = 0;
    dword_1066953C = 0;
    dword_10669540 = (int)sub_102F0C00;
    dword_10669544 = 0;
    dword_10669548 = 0;
    dword_1066954C = 0;
    dword_10669550 = 0;
    dword_10669554 = 0;
    dword_10669558 = 0;
    dword_1066955C = (int)sub_100390B0((char **)&dword_106E247C, "Recharge");
    word_1066956A = 32;
    dword_10669578 = 0;
    dword_1066957C = 0;
    dword_10669580 = 0;
    dword_10669584 = 0;
    dword_10669588 = 0;
    word_10669568 = 1;
    word_1066959C = 1;
    word_1066959E = 22;
    dword_10669560 = 0;
    dword_10669564 = 0;
    dword_1066956C = 0;
    dword_10669570 = 0;
    dword_10669574 = (int)sub_102F0290;
    dword_1066958C = 11;
    dword_10669590 = (int)"m_OnPlayerUse";
    dword_10669594 = 1172;
    dword_10669598 = 0;
    dword_106695A0 = (int)"OnPlayerUse";
    dword_106695A4 = (int)off_10614A2C;
    dword_106695A8 = 0;
    dword_106695AC = 0;
    dword_106695B0 = 0;
    dword_106695B4 = 0;
    dword_106695B8 = 0;
    dword_106695BC = 0;
    dword_106695C0 = 11;
    dword_106695C4 = (int)"m_OutRemainingHealth";
    dword_106695C8 = 1148;
    dword_106695CC = 0;
    dword_106695D0 = 1441793;
    dword_106695D4 = (int)"OutRemainingHealth";
    dword_106695D8 = (int)off_10614A2C;
    dword_106695DC = 0;
    dword_106695E0 = 0;
    dword_106695E4 = 0;
    dword_106695E8 = 0;
    dword_106695EC = 0;
    dword_106695F0 = 0;
  }
  dword_10668F80 = 12;
  dword_10668F7C = (int)&unk_10669384;
  return &dword_10668F7C;
}

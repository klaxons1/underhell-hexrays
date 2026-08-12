int sub_10249C50()
{
  if ( (dword_106C6554 & 1) == 0 )
  {
    dword_106C6554 |= 1u;
    sub_10122040((int)&unk_106C6340, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10122040((int)&unk_106C638C, (int)"m_iTeamNum", 888, 4, 5, 0, 0);
    sub_10122040((int)&unk_106C63D8, (int)"m_iScore", 872, 4, 0, 0, 0);
    sub_10122040((int)&unk_106C6424, (int)"m_iRoundsWon", 876, 4, 8, 0, 0);
    sub_10122120((int)&unk_106C6470, (int)"m_szTeamname", 840, 32, 0, (int)sub_10121B10);
    sub_10122040((int)&unk_106C64BC, (int)"player_array_element", 0, 4, 10, 1, sub_10249C20);
    sub_10122270((int)&unk_106C6508, 17, 0, (int)"\"player_array\"", (int)sub_10249B90);
    atexit(sub_104743C0);
  }
  sub_10121D00(byte_106C6580, (int)&unk_106C638C, 6, (int)off_1064F5BC[0]);
  return 1;
}

int sub_1006D380()
{
  if ( (dword_1041196C & 1) == 0 )
  {
    dword_1041196C |= 1u;
    sub_1009AED0(&unk_104117C8, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AED0(&unk_10411804, "m_iTeamNum", 1264, 4, 0, 0);
    sub_1009AED0(&unk_10411840, "m_iScore", 1244, 4, 0, 0);
    sub_1009AED0(&unk_1041187C, "m_iRoundsWon", 1248, 4, 0, 0);
    sub_1009ACE0(&unk_104118B8, "m_szTeamname", 1212, 32, 0, sub_1009AE20);
    sub_1009AED0(&unk_104118F4, "player_array_element", 0, -1, 0, sub_1006D030);
    sub_1009AD80(&unk_10411930, 17, 0, "\"player_array\"", sub_1006D2C0);
  }
  sub_1009AC10(&unk_10411804, 6, "DT_Team");
  return 1;
}

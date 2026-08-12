int sub_10042080()
{
  if ( (dword_10407748 & 1) == 0 )
  {
    dword_10407748 |= 1u;
    sub_1009AED0(&unk_104076D0, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AED0(&unk_1040770C, "deadflag", 4, 1, 0, 0);
  }
  sub_1009AC10(&unk_1040770C, 1, "DT_PlayerState");
  return 1;
}

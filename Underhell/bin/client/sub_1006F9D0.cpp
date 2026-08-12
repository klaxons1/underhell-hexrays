int sub_1006F9D0()
{
  if ( (dword_10412824 & 1) == 0 )
  {
    dword_10412824 |= 1u;
    sub_1009AED0(&unk_10412770, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_104127AC, "baseclass", 0, 0, off_103E9074, sub_1009AE70);
    sub_10116070(&unk_104127E8, "m_bHeadlightIsOn", 2292, 1);
  }
  sub_1009AC10(&unk_104127AC, 2, "DT_PropJeep");
  return 1;
}

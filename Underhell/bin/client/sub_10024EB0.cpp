int sub_10024EB0()
{
  if ( (dword_10403AD8 & 1) == 0 )
  {
    dword_10403AD8 |= 1u;
    sub_1009AED0(&unk_10403A60, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AC40(&unk_10403A9C, "m_flCycle", 1816, 4, 0, sub_1009ADC0);
  }
  sub_1009AC10(&unk_10403A9C, 1, "DT_ServerAnimationData");
  return 1;
}

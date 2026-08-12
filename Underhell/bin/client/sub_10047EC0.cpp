int sub_10047EC0()
{
  if ( (dword_10409030 & 1) == 0 )
  {
    dword_10409030 |= 1u;
    sub_1009AED0(&unk_10408FB8, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_10408FF4, "baseclass", 0, 0, off_103D7B8C, sub_1009AE70);
  }
  sub_1009AC10(&unk_10408FF4, 1, "DT_BreakableProp");
  return 1;
}

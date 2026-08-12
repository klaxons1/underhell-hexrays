int sub_100533C0()
{
  if ( (dword_1040B94C & 1) == 0 )
  {
    dword_1040B94C |= 1u;
    sub_1009AED0(&unk_1040B898, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040B8D4, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AC40(&unk_1040B910, "m_fDisappearDist", 1192, 4, 0, sub_1009ADC0);
  }
  sub_1009AC10(&unk_1040B8D4, 2, "DT_Func_LOD");
  return 1;
}

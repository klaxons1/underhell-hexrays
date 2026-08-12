int sub_100522D0()
{
  if ( (dword_1040B834 & 1) == 0 )
  {
    dword_1040B834 |= 1u;
    sub_1009AED0(&unk_1040B708, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040B744, "baseclass", 0, 0, off_103E9F64, sub_1009AE70);
    sub_1009AC40(&unk_1040B780, "m_flSize", 28, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040B7BC, "m_flSpeed", 32, 4, 0, sub_1009ADC0);
    sub_1009AC90(&unk_1040B7F8, "m_vecDirection", 36, 12, 0, sub_1009ADD0);
  }
  sub_1009AC10(&unk_1040B744, 4, "DT_TEDust");
  return 1;
}

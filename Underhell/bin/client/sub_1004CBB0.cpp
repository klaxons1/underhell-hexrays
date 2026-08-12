int sub_1004CBB0()
{
  if ( (dword_1040A6F0 & 1) == 0 )
  {
    dword_1040A6F0 |= 1u;
    sub_1009AED0(&unk_1040A600, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040A63C, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AC40(&unk_1040A678, "m_flDuration", 1192, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_1040A6B4, "m_nType", 1196, 4, 0, 0);
  }
  sub_1009AC10(&unk_1040A63C, 3, "DT_EnvScreenEffect");
  return 1;
}

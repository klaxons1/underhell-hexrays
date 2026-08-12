int sub_10196FC0()
{
  if ( (dword_1044815C & 1) == 0 )
  {
    dword_1044815C |= 1u;
    sub_1009AED0((int)&unk_10447EC8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10447F04, (int)"baseclass", 0, 0, (int)off_103D7B8C, (int)sub_1009AE70);
    sub_1009AC40((int)&unk_10447F40, (int)"m_flScaleX", 1960, 4, 0, (int)sub_10196F20);
    sub_1009AC40((int)&unk_10447F7C, (int)"m_flScaleY", 1964, 4, 0, (int)sub_10196F50);
    sub_1009AC40((int)&unk_10447FB8, (int)"m_flScaleZ", 1968, 4, 0, (int)sub_10196F80);
    sub_1009AC40((int)&unk_10447FF4, (int)"m_flLerpTimeX", 1972, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10448030, (int)"m_flLerpTimeY", 1976, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1044806C, (int)"m_flLerpTimeZ", 1980, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_104480A8, (int)"m_flGoalTimeX", 1984, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_104480E4, (int)"m_flGoalTimeY", 1988, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10448120, (int)"m_flGoalTimeZ", 1992, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_10448180, (int)&unk_10447F04, 10, (int)"DT_PropScalable");
  return 1;
}

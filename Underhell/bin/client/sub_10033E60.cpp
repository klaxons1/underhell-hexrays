int sub_10033E60()
{
  if ( (dword_10404B34 & 1) == 0 )
  {
    dword_10404B34 |= 1u;
    sub_1009AED0(&unk_10404A80, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_10404ABC, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AC40(&unk_10404AF8, "m_flWaveHeight", 1192, 4, 0, sub_1009ADC0);
  }
  sub_1009AC10(&unk_10404ABC, 2, "DT_BaseDoor");
  return 1;
}

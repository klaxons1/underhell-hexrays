int sub_1004D390()
{
  if ( (dword_1040A944 & 1) == 0 )
  {
    dword_1040A944 |= 1u;
    sub_1009AED0(&unk_1040A728, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040A764, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AED0(&unk_1040A7A0, "m_bUseCustomAutoExposureMin", 1192, 1, 0, 0);
    sub_1009AED0(&unk_1040A7DC, "m_bUseCustomAutoExposureMax", 1193, 1, 0, 0);
    sub_1009AED0(&unk_1040A818, "m_bUseCustomBloomScale", 1194, 1, 0, 0);
    sub_1009AC40(&unk_1040A854, "m_flCustomAutoExposureMin", 1196, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040A890, "m_flCustomAutoExposureMax", 1200, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040A8CC, "m_flCustomBloomScale", 1204, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040A908, "m_flCustomBloomScaleMinimum", 1208, 4, 0, sub_1009ADC0);
  }
  sub_1009AC10(&unk_1040A764, 8, "DT_EnvTonemapController");
  return 1;
}

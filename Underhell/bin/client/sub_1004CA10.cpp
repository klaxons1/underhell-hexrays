int sub_1004CA10()
{
  if ( (dword_1040A5FC & 1) == 0 )
  {
    dword_1040A5FC |= 1u;
    sub_1009AED0(&unk_1040A3E0, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040A41C, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009ACE0(&unk_1040A458, "m_iszOverlayNames[0]", 1192, 255, 0, sub_1009AE20);
    sub_1009AD80(&unk_1040A494, 10, 255, "m_iszOverlayNames", 0);
    sub_1009AC40(&unk_1040A4D0, "m_flOverlayTimes[0]", 3744, 4, 0, sub_1009ADC0);
    sub_1009AD80(&unk_1040A50C, 10, 4, "m_flOverlayTimes", 0);
    sub_1009AC40(&unk_1040A548, "m_flStartTime", 3784, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_1040A584, "m_iDesiredOverlay", 3788, 4, 0, 0);
    sub_10116070(&unk_1040A5C0, "m_bIsActive", 3792, 1);
  }
  sub_1009AC10(&unk_1040A41C, 8, "DT_EnvScreenOverlay");
  return 1;
}

int sub_1004EC20()
{
  if ( (dword_1040B018 & 1) == 0 )
  {
    dword_1040B018 |= 1u;
    sub_1009AED0(&unk_1040AEB0, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040AEEC, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AC40(&unk_1040AF28, "m_flFadeStartDist", 1192, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040AF64, "m_flFadeDist", 1196, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040AFA0, "m_flTranslucencyLimit", 1200, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_1040AFDC, "m_iBackgroundModelIndex", 1204, 4, 0, 0);
  }
  sub_1009AC10(&unk_1040AEEC, 5, "DT_FuncAreaPortalWindow");
  return 1;
}

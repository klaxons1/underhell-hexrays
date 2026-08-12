int sub_10058270()
{
  if ( (dword_1040C984 & 1) == 0 )
  {
    dword_1040C984 |= 1u;
    sub_1009AED0(&unk_1040C600, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040C63C, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009ACE0(&unk_1040C678, "m_szMaterialName", 1192, 255, 0, sub_1009AE20);
    sub_1009ACE0(&unk_1040C6B4, "m_szMaterialVar", 1447, 255, 0, sub_1009AE20);
    sub_1009ACE0(&unk_1040C6F0, "m_szMaterialVarValue", 1702, 255, 0, sub_1009AE20);
    sub_1009AED0(&unk_1040C72C, "m_iFrameStart", 1968, 4, 0, 0);
    sub_1009AED0(&unk_1040C768, "m_iFrameEnd", 1972, 4, 0, 0);
    sub_1009AED0(&unk_1040C7A4, "m_bWrap", 1976, 1, 0, 0);
    sub_1009AC40(&unk_1040C7E0, "m_flFramerate", 1980, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_1040C81C, "m_bNewAnimCommandsSemaphore", 1984, 1, 0, 0);
    sub_1009AC40(&unk_1040C858, "m_flFloatLerpStartValue", 1988, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040C894, "m_flFloatLerpEndValue", 1992, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040C8D0, "m_flFloatLerpTransitionTime", 1996, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_1040C90C, "m_bFloatLerpWrap", 2000, 1, 0, 0);
    sub_1009AED0(&unk_1040C948, "m_nModifyMode", 2008, 4, 0, 0);
  }
  sub_1009AC10(&unk_1040C63C, 14, "DT_MaterialModifyControl");
  return 1;
}

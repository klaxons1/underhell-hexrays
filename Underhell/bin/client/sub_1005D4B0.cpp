int sub_1005D4B0()
{
  if ( (dword_1040D8C4 & 1) == 0 )
  {
    dword_1040D8C4 |= 1u;
    sub_1009AED0(&unk_1040D5B8, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040D5F4, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AC40(&unk_1040D630, "m_FOV", 1192, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040D66C, "m_Resolution", 1196, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_1040D6A8, "m_bFogEnable", 1200, 1, 0, 0);
    sub_1009AED0(&unk_1040D6E4, "m_FogColor", 1201, 4, 0, 0);
    sub_1009AC40(&unk_1040D720, "m_flFogStart", 1208, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040D75C, "m_flFogEnd", 1212, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040D798, "m_flFogMaxDensity", 1216, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_1040D7D4, "m_bActive", 1220, 1, 0, 0);
    sub_1009AED0(&unk_1040D810, "m_bCustomTexture", 1222, 1, 0, 0);
    sub_1009AED0(&unk_1040D84C, "m_bUseScreenAspectRatio", 1221, 1, 0, 0);
    sub_1009AED0(&unk_1040D888, "m_iRenderTargetindex", 1224, 4, 0, 0);
  }
  sub_1009AC10(&unk_1040D5F4, 12, "DT_PointCamera");
  return 1;
}

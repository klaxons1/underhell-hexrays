int sub_10068290()
{
  if ( (dword_10410E60 & 1) == 0 )
  {
    dword_10410E60 |= 1u;
    sub_1009AED0(&unk_10410CF8, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_10410D34, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AC90(&unk_10410D70, "m_shadowDirection", 1192, 12, 0, sub_1009ADD0);
    sub_1009AED0(&unk_10410DAC, "m_shadowColor", 1204, 4, 0, 0);
    sub_1009AC40(&unk_10410DE8, "m_flShadowMaxDist", 1208, 4, 0, sub_1009ADC0);
    sub_10116070(&unk_10410E24, "m_bDisableShadows", 1212, 1);
  }
  sub_1009AC10(&unk_10410D34, 5, "DT_ShadowControl");
  return 1;
}

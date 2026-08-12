int sub_10048840()
{
  if ( (dword_1040965C & 1) == 0 )
  {
    dword_1040965C |= 1u;
    sub_1009AED0(&unk_10409440, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040947C, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AED0(&unk_104094B8, "m_Flags", 1192, 1, 0, 0);
    sub_1009AED0(&unk_104094F4, "m_LightStyle", 1193, 1, 0, 0);
    sub_1009AC40(&unk_10409530, "m_Radius", 1196, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_1040956C, "m_Exponent", 1200, 4, 0, 0);
    sub_1009AC40(&unk_104095A8, "m_InnerAngle", 1204, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_104095E4, "m_OuterAngle", 1208, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10409620, "m_SpotRadius", 1212, 4, 0, sub_1009ADC0);
  }
  sub_1009AC10(&unk_1040947C, 8, "DT_DynamicLight");
  return 1;
}

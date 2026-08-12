int sub_1006B7D0()
{
  if ( (dword_104113B0 & 1) == 0 )
  {
    dword_104113B0 |= 1u;
    sub_1009AED0(&unk_104112C0, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_104112FC, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AC40(&unk_10411338, "m_flLightScale", 1192, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10411374, "m_Radius", 1196, 4, 0, sub_1009ADC0);
  }
  sub_1009AC10(&unk_104112FC, 3, "DT_SpotlightEnd");
  return 1;
}

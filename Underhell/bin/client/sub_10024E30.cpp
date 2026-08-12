int sub_10024E30()
{
  if ( (dword_10403A5C & 1) == 0 )
  {
    dword_10403A5C |= 1u;
    sub_1009AED0(&unk_104039A8, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_104039E4, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_10116040(&unk_10403A20, "m_hLightingLandmark", 1192, 4, sub_10116120);
  }
  sub_1009AC10(&unk_104039E4, 2, "DT_InfoLightingRelative");
  return 1;
}

int sub_100595B0()
{
  if ( (dword_1040CD84 & 1) == 0 )
  {
    dword_1040CD84 |= 1u;
    sub_1009AED0(&unk_1040CCD0, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040CD0C, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AC40(&unk_1040CD48, "m_mass", 1192, 4, 0, sub_1009ADC0);
  }
  sub_1009AC10(&unk_1040CD0C, 2, "DT_PhysBox");
  return 1;
}

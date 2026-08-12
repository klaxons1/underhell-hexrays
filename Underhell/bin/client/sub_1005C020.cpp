int sub_1005C020()
{
  if ( (dword_1040D38C & 1) == 0 )
  {
    dword_1040D38C |= 1u;
    sub_1009AED0(&unk_1040D170, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040D1AC, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AC40(&unk_1040D1E8, "m_flStartScale", 1192, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040D224, "m_flScale", 1196, 4, 0, sub_1005BF50);
    sub_1009AC40(&unk_1040D260, "m_flScaleTime", 1200, 4, 0, sub_1005BF90);
    sub_1009AED0(&unk_1040D29C, "m_nFlags", 1204, 4, 0, 0);
    sub_1009AED0(&unk_1040D2D8, "m_nPlasmaModelIndex", 1208, 4, 0, 0);
    sub_1009AED0(&unk_1040D314, "m_nPlasmaModelIndex2", 1212, 4, 0, 0);
    sub_1009AED0(&unk_1040D350, "m_nGlowModelIndex", 1216, 4, 0, 0);
  }
  sub_1009AC10(&unk_1040D1AC, 8, "DT_Plasma");
  return 1;
}

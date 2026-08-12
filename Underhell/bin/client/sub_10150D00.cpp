int sub_10150D00()
{
  if ( (dword_1043DEF0 & 1) == 0 )
  {
    dword_1043DEF0 |= 1u;
    sub_1009AED0((int)&unk_1043DD88, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1043DDC4, (int)"baseclass", 0, 0, off_103D89D4, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_1043DE00, (int)"m_targetPosition", 1192, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_1043DE3C, (int)"m_controlPosition", 1204, 12, 0, (int)sub_1009ADD0);
    sub_1009AC40((int)&unk_1043DE78, (int)"m_scrollRate", 1216, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043DEB4, (int)"m_flWidth", 1220, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_1043D77C, (int)&unk_1043DDC4, 5, (int)"DT_QuadraticBeam");
  return 1;
}

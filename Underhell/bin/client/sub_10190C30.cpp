int sub_10190C30()
{
  if ( (dword_10446ADC & 1) == 0 )
  {
    dword_10446ADC |= 1u;
    sub_1009AED0((int)&unk_104469B0, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_104469EC, (int)"baseclass", 0, 0, off_103D89D4, (int)sub_1009AE70);
    sub_1009AED0((int)&unk_10446A28, (int)"m_nState", 1192, 4, 0, 0);
    sub_1009AC40((int)&unk_10446A64, (int)"m_flDuration", 1196, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10446AA0, (int)"m_flStartTime", 1200, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_10446AE0, (int)&unk_104469EC, 4, (int)"DT_AlyxEmpEffect");
  return 1;
}

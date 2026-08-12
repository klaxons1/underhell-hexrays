int sub_101915D0()
{
  if ( (dword_10446CF8 & 1) == 0 )
  {
    dword_10446CF8 |= 1u;
    sub_1009AED0((int)&unk_10446C08, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10446C44, (int)"baseclass", 0, 0, off_103D89D4, (int)sub_1009AE70);
    sub_1009AED0((int)&unk_10446C80, (int)"m_bOn", 1196, 1, 0, 0);
    sub_1009AC40((int)&unk_10446CBC, (int)"m_flDensity", 1200, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_10446D90, (int)&unk_10446C44, 3, (int)"DT_EnvStarfield");
  return 1;
}

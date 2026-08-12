int sub_1006C7D0()
{
  if ( (dword_10411530 & 1) == 0 )
  {
    dword_10411530 |= 1u;
    sub_1009AED0(&unk_10411440, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1041147C, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AED0(&unk_104114B8, "m_bMeasurePerf", 1193, 1, 0, 0);
    sub_1009AED0(&unk_104114F4, "m_bDisplayPerf", 1192, 1, 0, 0);
  }
  sub_1009AC10(&unk_1041147C, 3, "DT_ParticlePerformanceMonitor");
  return 1;
}

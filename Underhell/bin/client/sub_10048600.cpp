int sub_10048600()
{
  if ( (dword_10409420 & 1) == 0 )
  {
    dword_10409420 |= 1u;
    sub_1009AED0(&unk_10409330, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040936C, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AC40(&unk_104093A8, "m_Weight", 1192, 4, 0, sub_1009ADC0);
    sub_1009ACE0(&unk_104093E4, "m_lookupFilename", 1196, 260, 0, sub_1009AE20);
  }
  sub_1009AC10(&unk_1040936C, 3, "DT_ColorCorrectionVolume");
  return 1;
}

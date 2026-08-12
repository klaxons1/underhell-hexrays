int sub_10048240()
{
  if ( (dword_104092C8 & 1) == 0 )
  {
    dword_104092C8 |= 1u;
    sub_1009AED0(&unk_104090E8, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_10409124, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AC90(&unk_10409160, "m_vecOrigin", 1192, 12, 0, sub_1009ADD0);
    sub_1009AC40(&unk_1040919C, "m_minFalloff", 1204, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_104091D8, "m_maxFalloff", 1208, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10409214, "m_flCurWeight", 1212, 4, 0, sub_1009ADC0);
    sub_1009ACE0(&unk_10409250, "m_netLookupFilename", 1216, 260, 0, sub_1009AE20);
    sub_10116070(&unk_1040928C, "m_bEnabled", 1476, 1);
  }
  sub_1009AC10(&unk_10409124, 7, "DT_ColorCorrection");
  return 1;
}

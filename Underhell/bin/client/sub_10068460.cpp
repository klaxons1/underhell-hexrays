int sub_10068460()
{
  int v1[15]; // [esp-40h] [ebp-84h] BYREF
  _BYTE v2[60]; // [esp+8h] [ebp-3Ch] BYREF

  if ( (dword_104110D8 & 1) == 0 )
  {
    dword_104110D8 |= 1u;
    sub_1009AED0(&unk_10410E80, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_10410EBC, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_10116070(&unk_10410EF8, "m_bEnabled", 1192, 1);
    sub_1009ACE0(&unk_10410F34, "m_szDisplayText", 1193, 128, 0, sub_1009AE20);
    sub_1009ACE0(&unk_10410F70, "m_szSlideshowDirectory", 1321, 128, 0, sub_1009AE20);
    qmemcpy(v1, (const void *)sub_1009AED0(v2, "m_chCurrentSlideLists[0]", 1472, 1, 0, 0), sizeof(v1));
    sub_1009AF50(
      (int)&unk_10410FAC,
      (char)"m_chCurrentSlideLists",
      1472,
      1,
      16,
      v1[0],
      v1[1],
      v1[2],
      v1[3],
      v1[4],
      v1[5],
      v1[6],
      v1[7],
      v1[8],
      v1[9],
      v1[10],
      v1[11],
      v1[12],
      v1[13],
      v1[14],
      (int)sub_1009AE70);
    sub_1009AC40(&unk_10410FE8, "m_fMinSlideTime", 1496, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10411024, "m_fMaxSlideTime", 1500, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_10411060, "m_iCycleType", 1508, 4, 0, 0);
    sub_10116070(&unk_1041109C, "m_bNoListRepeats", 1512, 1);
  }
  sub_1009AC10(&unk_10410EBC, 9, "DT_SlideshowDisplay");
  return 1;
}

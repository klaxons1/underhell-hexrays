int sub_1003E1E0()
{
  int v1[15]; // [esp-40h] [ebp-84h] BYREF
  _BYTE v2[60]; // [esp+8h] [ebp-3Ch] BYREF

  if ( (dword_104072C8 & 1) == 0 )
  {
    dword_104072C8 |= 1u;
    sub_1009AED0(&unk_10407070, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_104070AC, "baseclass", 0, 0, off_103D8790, sub_1009AE70);
    qmemcpy(v1, (const void *)sub_1009AC40(v2, "m_flexWeight[0]", 2120, 4, 0, sub_1009ADC0), sizeof(v1));
    sub_1009AF50(
      (int)&unk_104070E8,
      (char)"m_flexWeight",
      2120,
      4,
      96,
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
    sub_1009AED0(&unk_10407124, "m_blinktoggle", 2548, 4, 0, 0);
    sub_1009AC90(&unk_10407160, "m_viewtarget", 2064, 12, 0, sub_1009ADD0);
    sub_1009AC40(&unk_1040719C, "m_vecViewOffset[0]", 220, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_104071D8, "m_vecViewOffset[1]", 224, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10407214, "m_vecViewOffset[2]", 228, 4, 0, sub_1009ADC0);
    sub_1009AC90(&unk_10407250, "m_vecLean", 2904, 12, 0, sub_1009ADD0);
    sub_1009AC90(&unk_1040728C, "m_vecShift", 2960, 12, 0, sub_1009ADD0);
  }
  sub_1009AC10(&unk_104070AC, 9, "DT_BaseFlex");
  return 1;
}

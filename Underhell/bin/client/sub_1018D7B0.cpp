int sub_1018D7B0()
{
  if ( (dword_10445FE0 & 1) == 0 )
  {
    dword_10445FE0 |= 1u;
    sub_1009AED0((int)&unk_10445E78, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10445EB4, (int)"baseclass", 0, 0, (int)off_103D7B2C, (int)sub_1009AE70);
    sub_1009AC40((int)&unk_10445EF0, (int)"m_flAltitude", 3432, 4, 0, (int)sub_1009ADC0);
    sub_1009AC90((int)&unk_10445F2C, (int)"m_vecRoot", 3396, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_10445F68, (int)"m_vecTip", 3408, 12, 0, (int)sub_1018D790);
    sub_1009AC90((int)&unk_10445FA4, (int)"m_vecTipDrawOffset", 3420, 12, 0, (int)sub_1009ADD0);
  }
  sub_1009AC10(dword_10445FE4, (int)&unk_10445EB4, 5, (int)"DT_Barnacle");
  return 1;
}

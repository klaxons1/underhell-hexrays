int sub_10167AF0()
{
  if ( (dword_10442018 & 1) == 0 )
  {
    dword_10442018 |= 1u;
    sub_1009AED0((int)&unk_10441E38, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10441E74, (int)"baseclass", 0, 0, (int)off_103E8BDC, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_10441EB0, (int)"m_vecMins", 16, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_10441EEC, (int)"m_vecMaxs", 28, 12, 0, (int)sub_1009ADD0);
    sub_1009AED0((int)&unk_10441F28, (int)"m_nModelIndex", 44, 4, 0, 0);
    sub_1009AC40((int)&unk_10441F64, (int)"m_fHeight", 40, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_10441FA0, (int)"m_nCount", 48, 4, 0, 0);
    sub_1009AC40((int)&unk_10441FDC, (int)"m_fSpeed", 52, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_10442054, (int)&unk_10441E74, 7, (int)"DT_TEBubbles");
  return 1;
}

int sub_10167CC0()
{
  if ( (dword_10442250 & 1) == 0 )
  {
    dword_10442250 |= 1u;
    sub_1009AED0((int)&unk_10442070, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_104420AC, (int)"baseclass", 0, 0, (int)off_103E8BDC, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_104420E8, (int)"m_vecMins", 16, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_10442124, (int)"m_vecMaxs", 28, 12, 0, (int)sub_1009ADD0);
    sub_1009AED0((int)&unk_10442160, (int)"m_nModelIndex", 44, 4, 0, 0);
    sub_1009AC40((int)&unk_1044219C, (int)"m_flWaterZ", 40, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_104421D8, (int)"m_nCount", 48, 4, 0, 0);
    sub_1009AC40((int)&unk_10442214, (int)"m_fSpeed", 52, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_1044228C, (int)&unk_104420AC, 7, (int)"DT_TEBubbleTrail");
  return 1;
}

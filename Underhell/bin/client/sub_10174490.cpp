int sub_10174490()
{
  if ( (dword_10444E40 & 1) == 0 )
  {
    dword_10444E40 |= 1u;
    sub_1009AED0((int)&unk_10444C60, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10444C9C, (int)"baseclass", 0, 0, (int)off_103E8BDC, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_10444CD8, (int)"m_vecOrigin", 16, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_10444D14, (int)"m_vecDirection", 28, 12, 0, (int)sub_1009ADD0);
    sub_1009AED0((int)&unk_10444D50, (int)"m_nModelIndex", 40, 4, 0, 0);
    sub_1009AC40((int)&unk_10444D8C, (int)"m_fNoise", 48, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_10444DC8, (int)"m_nCount", 52, 4, 0, 0);
    sub_1009AED0((int)&unk_10444E04, (int)"m_nSpeed", 44, 4, 0, 0);
  }
  sub_1009AC10(dword_10444E7C, (int)&unk_10444C9C, 7, (int)"DT_TESpriteSpray");
  return 1;
}

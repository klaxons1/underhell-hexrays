int sub_1019B3B0()
{
  if ( (dword_10448C28 & 1) == 0 )
  {
    dword_10448C28 |= 1u;
    sub_1009AED0((int)&unk_10448AC0, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10448AFC, (int)"baseclass", 0, 0, (int)off_103E9F64, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_10448B38, (int)"m_vecNormal", 28, 12, 0, (int)sub_1009ADD0);
    sub_1009AC40((int)&unk_10448B74, (int)"m_flScale", 40, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_10448BB0, (int)"m_nRadius", 44, 4, 0, 0);
    sub_1009AED0((int)&unk_10448BEC, (int)"m_nMagnitude", 48, 4, 0, 0);
  }
  sub_1009AC10(dword_10448C60, (int)&unk_10448AFC, 5, (int)"DT_TEConcussiveExplosion");
  return 1;
}

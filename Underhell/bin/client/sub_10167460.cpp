int sub_10167460()
{
  if ( (dword_10441C54 & 1) == 0 )
  {
    dword_10441C54 |= 1u;
    sub_1009AED0((int)&unk_10441948, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10441984, (int)"baseclass", 0, 0, (int)off_103E8BDC, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_104419C0, (int)"m_vecOrigin", 16, 12, 0, (int)sub_1009ADD0);
    sub_1009AC40((int)&unk_104419FC, (int)"m_angRotation[0]", 28, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10441A38, (int)"m_angRotation[1]", 32, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10441A74, (int)"m_angRotation[2]", 36, 4, 0, (int)sub_1009ADC0);
    sub_1009AC90((int)&unk_10441AB0, (int)"m_vecSize", 40, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_10441AEC, (int)"m_vecVelocity", 52, 12, 0, (int)sub_1009ADD0);
    sub_1009AED0((int)&unk_10441B28, (int)"m_nModelIndex", 68, 4, 0, 0);
    sub_1009AED0((int)&unk_10441B64, (int)"m_nRandomization", 64, 4, 0, 0);
    sub_1009AED0((int)&unk_10441BA0, (int)"m_nCount", 72, 4, 0, 0);
    sub_1009AC40((int)&unk_10441BDC, (int)"m_fTime", 76, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_10441C18, (int)"m_nFlags", 80, 4, 0, 0);
  }
  sub_1009AC10(dword_10441CAC, (int)&unk_10441984, 12, (int)"DT_TEBreakModel");
  return 1;
}

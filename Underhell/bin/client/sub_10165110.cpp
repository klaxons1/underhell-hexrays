int sub_10165110()
{
  if ( (dword_104407D8 & 1) == 0 )
  {
    dword_104407D8 |= 1u;
    sub_1009AED0((int)&unk_10440418, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AED0((int)&unk_10440454, (int)"m_nModelIndex", 16, 4, 0, 0);
    sub_1009AED0((int)&unk_10440490, (int)"m_nHaloIndex", 20, 4, 0, 0);
    sub_1009AED0((int)&unk_104404CC, (int)"m_nStartFrame", 24, 4, 0, 0);
    sub_1009AED0((int)&unk_10440508, (int)"m_nFrameRate", 28, 4, 0, 0);
    sub_1009AC40((int)&unk_10440544, (int)"m_fLife", 32, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10440580, (int)"m_fWidth", 36, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_104405BC, (int)"m_fEndWidth", 40, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_104405F8, (int)"m_nFadeLength", 44, 4, 0, 0);
    sub_1009AC40((int)&unk_10440634, (int)"m_fAmplitude", 48, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_10440670, (int)"m_nSpeed", 68, 4, 0, 0);
    sub_1009AED0((int)&unk_104406AC, (int)"r", 52, 4, 0, 0);
    sub_1009AED0((int)&unk_104406E8, (int)"g", 56, 4, 0, 0);
    sub_1009AED0((int)&unk_10440724, (int)"b", 60, 4, 0, 0);
    sub_1009AED0((int)&unk_10440760, (int)"a", 64, 4, 0, 0);
    sub_1009AED0((int)&unk_1044079C, (int)"m_nFlags", 72, 4, 0, 0);
  }
  sub_1009AC10(dword_104407DC, (int)&unk_10440454, 15, (int)"DT_BaseBeam");
  return 1;
}

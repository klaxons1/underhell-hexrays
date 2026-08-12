int sub_10168510()
{
  if ( (dword_104428F0 & 1) == 0 )
  {
    dword_104428F0 |= 1u;
    sub_1009AED0((int)&unk_10442698, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_104426D4, (int)"baseclass", 0, 0, (int)off_103E8BDC, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_10442710, (int)"m_vecOrigin", 16, 12, 0, (int)sub_1009ADD0);
    sub_1009AED0((int)&unk_1044274C, (int)"r", 32, 4, 0, 0);
    sub_1009AED0((int)&unk_10442788, (int)"g", 36, 4, 0, 0);
    sub_1009AED0((int)&unk_104427C4, (int)"b", 40, 4, 0, 0);
    sub_1009AED0((int)&unk_10442800, (int)"exponent", 44, 4, 0, 0);
    sub_1009AC40((int)&unk_1044283C, (int)"m_fRadius", 28, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10442878, (int)"m_fTime", 48, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_104428B4, (int)"m_fDecay", 52, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_1044292C, (int)&unk_104426D4, 9, (int)"DT_TEDynamicLight");
  return 1;
}

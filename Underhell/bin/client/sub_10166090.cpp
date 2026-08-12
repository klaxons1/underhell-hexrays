int sub_10166090()
{
  if ( (dword_104411EC & 1) == 0 )
  {
    dword_104411EC |= 1u;
    sub_1009AED0((int)&unk_104410C0, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_104410FC, (int)"baseclass", 0, 0, (int)off_103E9500, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_10441138, (int)"m_vecCenter", 76, 12, 0, (int)sub_1009ADD0);
    sub_1009AC40((int)&unk_10441174, (int)"m_flStartRadius", 88, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_104411B0, (int)"m_flEndRadius", 92, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_10441250, (int)&unk_104410FC, 4, (int)"DT_TEBeamRingPoint");
  return 1;
}

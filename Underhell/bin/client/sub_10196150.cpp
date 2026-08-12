int sub_10196150()
{
  if ( (dword_10447E90 & 1) == 0 )
  {
    dword_10447E90 |= 1u;
    sub_1009AED0((int)&unk_10447D28, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10447D64, (int)"baseclass", 0, 0, (int)off_103D7B8C, (int)sub_1009AE70);
    sub_10116070((int)&unk_10447DA0, (int)"m_bEmit", 1972, 1);
    sub_1009AC40((int)&unk_10447DDC, (int)"m_flRadius", 1976, 4, 0, (int)sub_1009ADC0);
    sub_10116070((int)&unk_10447E18, (int)"m_bHeld", 1980, 1);
    sub_10116070((int)&unk_10447E54, (int)"m_bLaunched", 1981, 1);
  }
  sub_1009AC10(dword_10447E94, (int)&unk_10447D64, 5, (int)"DT_PropCombineBall");
  return 1;
}

int sub_101738C0()
{
  if ( (dword_10444744 & 1) == 0 )
  {
    dword_10444744 |= 1u;
    sub_1009AED0((int)&unk_10444690, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_104446CC, (int)"baseclass", 0, 0, (int)off_103E9F64, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_10444708, (int)"m_vecEnd", 28, 12, 0, (int)sub_1009ADD0);
  }
  sub_1009AC10(dword_10444770, (int)&unk_104446CC, 2, (int)"DT_TEShowLine");
  return 1;
}

int sub_10165C50()
{
  if ( (dword_10440ED0 & 1) == 0 )
  {
    dword_10440ED0 |= 1u;
    sub_1009AED0((int)&unk_10440DE0, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10440E1C, (int)"baseclass", 0, 0, (int)off_103E9500, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_10440E58, (int)"m_vecStartPoint", 76, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_10440E94, (int)"m_vecEndPoint", 88, 12, 0, (int)sub_1009ADD0);
  }
  sub_1009AC10(dword_10440F3C, (int)&unk_10440E1C, 3, (int)"DT_TEBeamPoints");
  return 1;
}

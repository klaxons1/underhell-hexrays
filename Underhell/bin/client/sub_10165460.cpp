int sub_10165460()
{
  if ( (dword_10440960 & 1) == 0 )
  {
    dword_10440960 |= 1u;
    sub_1009AED0((int)&unk_104407F8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10440834, (int)"baseclass", 0, 0, (int)off_103E9500, (int)sub_1009AE70);
    sub_1009AED0((int)&unk_10440870, (int)"m_nStartEntity", 76, 4, 0, 0);
    sub_1009AED0((int)&unk_104408AC, (int)"m_nEndEntity", 80, 4, 0, 0);
    sub_1009AC90((int)&unk_104408E8, (int)"m_vecStartPoint", 84, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_10440924, (int)"m_vecEndPoint", 96, 12, 0, (int)sub_1009ADD0);
  }
  sub_1009AC10(dword_104409D4, (int)&unk_10440834, 5, (int)"DT_TEBeamEntPoint");
  return 1;
}

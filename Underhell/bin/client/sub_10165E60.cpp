int sub_10165E60()
{
  if ( (dword_10441048 & 1) == 0 )
  {
    dword_10441048 |= 1u;
    sub_1009AED0((int)&unk_10440F58, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10440F94, (int)"baseclass", 0, 0, (int)off_103E9500, (int)sub_1009AE70);
    sub_1009AED0((int)&unk_10440FD0, (int)"m_nStartEntity", 76, 4, 0, 0);
    sub_1009AED0((int)&unk_1044100C, (int)"m_nEndEntity", 80, 4, 0, 0);
  }
  sub_1009AC10(dword_104410A4, (int)&unk_10440F94, 3, (int)"DT_TEBeamRing");
  return 1;
}

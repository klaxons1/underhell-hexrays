int sub_10168000()
{
  if ( (dword_10442644 & 1) == 0 )
  {
    dword_10442644 |= 1u;
    sub_1009AED0((int)&unk_104424A0, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_104424DC, (int)"baseclass", 0, 0, (int)off_103E8BDC, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_10442518, (int)"m_vecOrigin", 16, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_10442554, (int)"m_vecStart", 28, 12, 0, (int)sub_1009ADD0);
    sub_1009AED0((int)&unk_10442590, (int)"m_nEntity", 40, 4, 0, 0);
    sub_1009AED0((int)&unk_104425CC, (int)"m_nHitbox", 44, 4, 0, 0);
    sub_1009AED0((int)&unk_10442608, (int)"m_nIndex", 48, 4, 0, 0);
  }
  sub_1009AC10(dword_1044267C, (int)&unk_104424DC, 6, (int)"DT_TEDecal");
  return 1;
}

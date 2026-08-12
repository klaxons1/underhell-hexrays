int sub_10167840()
{
  if ( (dword_10441DF4 & 1) == 0 )
  {
    dword_10441DF4 |= 1u;
    sub_1009AED0((int)&unk_10441CC8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10441D04, (int)"baseclass", 0, 0, (int)off_103E8BDC, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_10441D40, (int)"m_vecOrigin", 16, 12, 0, (int)sub_1009ADD0);
    sub_1009AED0((int)&unk_10441D7C, (int)"m_nEntity", 28, 4, 0, 0);
    sub_1009AED0((int)&unk_10441DB8, (int)"m_nIndex", 32, 4, 0, 0);
  }
  sub_1009AC10(dword_10441E1C, (int)&unk_10441D04, 4, (int)"DT_TEBSPDecal");
  return 1;
}

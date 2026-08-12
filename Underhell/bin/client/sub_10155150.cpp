int sub_10155150()
{
  if ( (dword_1043E120 & 1) == 0 )
  {
    dword_1043E120 |= 1u;
    sub_1009AED0((int)&unk_1043E030, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1043E06C, (int)"baseclass", 0, 0, (int)off_103E9F64, (int)sub_1009AE70);
    sub_1009AED0((int)&unk_1043E0A8, (int)"m_nType", 28, 4, 0, 0);
    sub_1009AC90((int)&unk_1043E0E4, (int)"m_vecDirection", 32, 12, 0, (int)sub_1009ADD0);
  }
  sub_1009AC10(dword_1043E014, (int)&unk_1043E06C, 3, (int)"DT_TEGaussExplosion");
  return 1;
}

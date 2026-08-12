int sub_1016B260()
{
  if ( (dword_104439D8 & 1) == 0 )
  {
    dword_104439D8 |= 1u;
    sub_1009AED0((int)&unk_10443870, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_104438AC, (int)"baseclass", 0, 0, (int)off_103E8BDC, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_104438E8, (int)"m_vecOrigin", 16, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_10443924, (int)"m_vecNormal", 28, 12, 0, (int)sub_1009ADD0);
    sub_1009AED0((int)&unk_10443960, (int)"m_iType", 40, 4, 0, 0);
    sub_1009AED0((int)&unk_1044399C, (int)"m_ucFlags", 44, 1, 0, 0);
  }
  sub_1009AC10(dword_10443A0C, (int)&unk_104438AC, 5, (int)"DT_TEImpact");
  return 1;
}

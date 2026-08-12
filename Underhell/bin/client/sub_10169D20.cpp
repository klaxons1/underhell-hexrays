int sub_10169D20()
{
  if ( (dword_10443000 & 1) == 0 )
  {
    dword_10443000 |= 1u;
    sub_1009AED0((int)&unk_10442E98, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10442ED4, (int)"baseclass", 0, 0, (int)off_103E8BDC, (int)sub_1009AE70);
    sub_1009AED0((int)&unk_10442F10, (int)"m_nEntity", 16, 4, 0, 0);
    sub_1009AED0((int)&unk_10442F4C, (int)"m_nModelIndex", 20, 4, 0, 0);
    sub_1009AED0((int)&unk_10442F88, (int)"m_nDensity", 24, 4, 0, 0);
    sub_1009AED0((int)&unk_10442FC4, (int)"m_nCurrent", 28, 4, 0, 0);
  }
  sub_1009AC10(dword_10443024, (int)&unk_10442ED4, 5, (int)"DT_TEFizz");
  return 1;
}

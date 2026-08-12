int sub_1016B490()
{
  if ( (dword_10443C00 & 1) == 0 )
  {
    dword_10443C00 |= 1u;
    sub_1009AED0((int)&unk_10443B10, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10443B4C, (int)"baseclass", 0, 0, (int)off_103E9F64, (int)sub_1009AE70);
    sub_1009AED0((int)&unk_10443B88, (int)"m_nModelIndex", 28, 4, 0, 0);
    sub_1009AED0((int)&unk_10443BC4, (int)"m_nReversed", 32, 4, 0, 0);
  }
  sub_1009AC10(dword_10443C28, (int)&unk_10443B4C, 3, (int)"DT_TELargeFunnel");
  return 1;
}

int sub_101668B0()
{
  if ( (dword_104418F0 & 1) == 0 )
  {
    dword_104418F0 |= 1u;
    sub_1009AED0((int)&unk_10441710, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044174C, (int)"baseclass", 0, 0, (int)off_103E9F64, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_10441788, (int)"m_vecDirection", 28, 12, 0, (int)sub_1009ADD0);
    sub_1009AED0((int)&unk_104417C4, (int)"r", 40, 4, 0, 0);
    sub_1009AED0((int)&unk_10441800, (int)"g", 44, 4, 0, 0);
    sub_1009AED0((int)&unk_1044183C, (int)"b", 48, 4, 0, 0);
    sub_1009AED0((int)&unk_10441878, (int)"a", 52, 4, 0, 0);
    sub_1009AED0((int)&unk_104418B4, (int)"m_nAmount", 56, 4, 0, 0);
  }
  sub_1009AC10(dword_10441930, (int)&unk_1044174C, 7, (int)"DT_TEBloodStream");
  return 1;
}

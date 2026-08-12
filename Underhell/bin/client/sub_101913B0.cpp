int sub_101913B0()
{
  if ( (dword_10446BE8 & 1) == 0 )
  {
    dword_10446BE8 |= 1u;
    sub_1009AED0((int)&unk_10446AF8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10446B34, (int)"baseclass", 0, 0, (int)off_103D7B8C, (int)sub_1009AE70);
    sub_1009AD30((int)&unk_10446B70, (int)"m_Shared", 1960, 0, (int)&unk_1044C974, (int)sub_1009AE70);
    sub_10116070((int)&unk_10446BAC, (int)"m_bLanded", 2080, 1);
  }
  sub_1009AC10(dword_10446BEC, (int)&unk_10446B34, 3, (int)"DT_EnvHeadcrabCanister");
  return 1;
}

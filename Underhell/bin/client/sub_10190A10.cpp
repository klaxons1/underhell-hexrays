int sub_10190A10()
{
  if ( (dword_10446994 & 1) == 0 )
  {
    dword_10446994 |= 1u;
    sub_1009AED0((int)&unk_104468E0, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044691C, (int)"baseclass", 0, 0, (int)off_103D7B8C, (int)sub_1009AE70);
    sub_1009AED0((int)&unk_10446958, (int)"m_nReferencePlayer", 1960, 4, 0, 0);
  }
  sub_1009AC10(dword_10446998, (int)&unk_1044691C, 2, (int)"DT_Corpse");
  return 1;
}

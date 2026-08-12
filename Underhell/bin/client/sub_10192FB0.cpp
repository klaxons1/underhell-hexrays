int sub_10192FB0()
{
  if ( (dword_10447584 & 1) == 0 )
  {
    dword_10447584 |= 1u;
    sub_1009AED0((int)&unk_10447458, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10447494, (int)"baseclass", 0, 0, (int)off_103D7B2C, (int)sub_1009AE70);
    sub_10116070((int)&unk_104474D0, (int)"m_bCavernBreed", 3384, 1);
    sub_10116070((int)&unk_1044750C, (int)"m_bInCavern", 3385, 1);
    sub_1009AED0((int)&unk_10447548, (int)"m_iBleedingLevel", 3392, 1, 0, 0);
  }
  sub_1009AC10(dword_104475E0, (int)&unk_10447494, 4, (int)"DT_NPC_AntlionGuard");
  return 1;
}

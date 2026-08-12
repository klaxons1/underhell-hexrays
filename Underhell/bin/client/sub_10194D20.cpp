int sub_10194D20()
{
  if ( (dword_10447A70 & 1) == 0 )
  {
    dword_10447A70 |= 1u;
    sub_1009AED0((int)&unk_10447980, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_104479BC, (int)"baseclass", 0, 0, (int)off_103D7B2C, (int)sub_1009AE70);
    sub_10116040((int)&unk_104479F8, (int)"m_hAnimationTarget", 3384, 4, (int (__cdecl *)(int, int, int))sub_10116120);
    sub_1009AED0((int)&unk_10447A34, (int)"m_nTargetAttachment", 3388, 4, 0, 0);
  }
  sub_1009AC10(dword_10447A74, (int)&unk_104479BC, 3, (int)"DT_NPC_Puppet");
  return 1;
}

int sub_1018B740()
{
  if ( (dword_10445BD8 & 1) == 0 )
  {
    dword_10445BD8 |= 1u;
    sub_1009AED0((int)&unk_10445B60, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10445B9C, (int)"baseclass", 0, 0, (int)off_103D65B4, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_104458BC, (int)&unk_10445B9C, 1, (int)"DT_BaseHLCombatWeapon");
  return 1;
}

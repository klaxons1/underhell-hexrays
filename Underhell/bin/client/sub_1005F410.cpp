int sub_1005F410()
{
  if ( (dword_1040DC9C & 1) == 0 )
  {
    dword_1040DC9C |= 1u;
    sub_1009AED0(&unk_1040DBE8, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040DC24, "baseclass", 0, 0, off_103DA780, sub_1009AE70);
    sub_10116070(&unk_1040DC60, "m_bUseHitboxesForRenderBox", 1960, 1);
  }
  sub_1009AC10(&unk_1040DC24, 2, "DT_DynamicProp");
  return 1;
}

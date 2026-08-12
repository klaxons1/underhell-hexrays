int sub_10059760()
{
  if ( (dword_1040CE54 & 1) == 0 )
  {
    dword_1040CE54 |= 1u;
    sub_1009AED0(&unk_1040CDA0, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040CDDC, "baseclass", 0, 0, off_103DA780, sub_1009AE70);
    sub_10116070(&unk_1040CE18, "m_bAwake", 1960, 1);
  }
  sub_1009AC10(&unk_1040CDDC, 2, "DT_PhysicsProp");
  return 1;
}

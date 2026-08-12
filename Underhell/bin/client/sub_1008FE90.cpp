int sub_1008FE90()
{
  if ( (dword_1042CA24 & 1) == 0 )
  {
    dword_1042CA24 |= 1u;
    sub_1009AED0(&unk_1042C808, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AC90(&unk_1042C844, "m_vecMins", 8, 12, 0, sub_1008FE30);
    sub_1009AC90(&unk_1042C880, "m_vecMaxs", 20, 12, 0, sub_1008FE60);
    sub_1009AED0(&unk_1042C8BC, "m_nSolidType", 41, 1, 0, sub_1008FDF0);
    sub_1009AED0(&unk_1042C8F8, "m_usSolidFlags", 36, 2, 0, sub_1008FE10);
    sub_1009AED0(&unk_1042C934, "m_nSurroundType", 40, 1, 0, sub_1008FA10);
    sub_1009AED0(&unk_1042C970, "m_triggerBloat", 42, 1, 0, sub_1008FA10);
    sub_1009AC90(&unk_1042C9AC, "m_vecSpecifiedSurroundingMins", 44, 12, 0, sub_1008F980);
    sub_1009AC90(&unk_1042C9E8, "m_vecSpecifiedSurroundingMaxs", 56, 12, 0, sub_1008F980);
  }
  sub_1009AC10(&unk_1042C844, 8, "DT_CollisionProperty");
  return 1;
}

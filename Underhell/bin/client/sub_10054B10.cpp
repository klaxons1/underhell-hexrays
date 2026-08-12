int sub_10054B10()
{
  if ( (dword_1040BE04 & 1) == 0 )
  {
    dword_1040BE04 |= 1u;
    sub_1009AED0(&unk_1040BCD8, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040BD14, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AC90(&unk_1040BD50, "m_vecOrigin", 708, 12, 0, sub_1009ADD0);
    sub_1009AC90(&unk_1040BD8C, "m_angRotation", 720, 12, 0, sub_1009ADD0);
    sub_1009AED0(&unk_1040BDC8, "m_flSimulationTime", 104, 4, 0, sub_10035710);
  }
  sub_1009AC10(&unk_1040BD14, 4, "DT_FuncRotating");
  return 1;
}

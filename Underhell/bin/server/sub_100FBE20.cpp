int sub_100FBE20()
{
  if ( (dword_1069A458 & 1) == 0 )
  {
    dword_1069A458 |= 1u;
    sub_10122040(&unk_1069A1F8, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      &unk_1069A244,
      "baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_101222C0(&unk_1069A290, "DT_BaseEntity", "m_angRotation");
    sub_101222C0(&unk_1069A2DC, "DT_BaseEntity", "m_vecOrigin");
    sub_101222C0(&unk_1069A328, "DT_BaseEntity", "m_flSimulationTime");
    sub_10121E50((int)&unk_1069A374, (int)"m_vecOrigin", 716, 12, -1, 1026, 0.0, -121121.12, (int)sub_100FBCD0);
    sub_10121FA0(&unk_1069A3C0, "m_angRotation", 728, 12, 13, 1024, sub_100FBD30);
    sub_10122040(&unk_1069A40C, "m_flSimulationTime", 128, 4, 8, 66561, sub_100FBDE0);
    atexit(sub_104701E0);
  }
  sub_10121D00(&unk_1069A244, 7, off_106132A4[0]);
  return 1;
}

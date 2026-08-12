int sub_102B66D0()
{
  if ( (dword_106DCCBC & 1) == 0 )
  {
    dword_106DCCBC |= 1u;
    sub_10122040((int)&unk_106DCAA8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106DCAF4,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106DCB40, (int)"m_flScale", 800, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106DCB8C, (int)"m_nState", 804, 4, 8, 1, 0);
    sub_10121D30((int)&unk_106DCBD8, (int)"m_flDuration", 808, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106DCC24, (int)"m_flStartTime", 812, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106DCC70, (int)"m_spawnflags", 248, 4, 0, 1, 0);
    atexit(sub_10476960);
  }
  sub_10121D00(byte_106DCCF8, (int)&unk_106DCAF4, 6, (int)off_10660F2C);
  return 1;
}

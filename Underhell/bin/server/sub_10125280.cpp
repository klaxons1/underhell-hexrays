int sub_10125280()
{
  if ( (dword_1069D908 & 1) == 0 )
  {
    dword_1069D908 |= 1u;
    sub_10122040((int)&unk_1069D740, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_1069D78C,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_1069D7D8, (int)"m_targetPosition", 800, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_1069D824, (int)"m_controlPosition", 812, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121D30((int)&unk_1069D870, (int)"m_scrollRate", 824, 4, 8, 0, -4.0, 4.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_1069D8BC, (int)"m_flWidth", 828, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_10470980);
  }
  sub_10121D00(byte_1069DE24, (int)&unk_1069D78C, 5, (int)off_10619AA0[0]);
  return 1;
}

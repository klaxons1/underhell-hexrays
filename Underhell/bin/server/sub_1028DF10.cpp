int sub_1028DF10()
{
  if ( (dword_106D7C34 & 1) == 0 )
  {
    dword_106D7C34 |= 1u;
    sub_10122040((int)&unk_106D7A20, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D7A6C,
      (int)"baseclass",
      0,
      (int)off_1065A4D0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106D7AB8, (int)"m_vecOrigin", 12, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106D7B04, (int)"m_vecStart", 24, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106D7B50, (int)"m_nEntity", 36, 4, 11, 1, 0);
    sub_10122040((int)&unk_106D7B9C, (int)"m_nHitbox", 40, 4, 12, 1, 0);
    sub_10122040((int)&unk_106D7BE8, (int)"m_nIndex", 44, 4, 9, 1, 0);
    atexit(sub_10475E00);
  }
  sub_10121D00(byte_106D7C4C, (int)&unk_106D7A6C, 6, (int)off_1065C90C);
  return 1;
}

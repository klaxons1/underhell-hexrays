int sub_1028F410()
{
  if ( (dword_106D8AA4 & 1) == 0 )
  {
    dword_106D8AA4 |= 1u;
    sub_10122040((int)&unk_106D8890, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D88DC,
      (int)"baseclass",
      0,
      (int)off_1065A4D0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106D8928, (int)"m_vecOrigin", 12, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106D8974, (int)"m_vecDirection", 24, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106D89C0, (int)"m_nEntity", 36, 4, 11, 1, 0);
    sub_10122040((int)&unk_106D8A0C, (int)"m_nIndex", 40, 4, 8, 1, 0);
    sub_10122040((int)&unk_106D8A58, (int)"m_chMaterialType", 44, 1, 8, 1, 0);
    atexit(sub_10475FC0);
  }
  sub_10121D00(byte_106D8ABC, (int)&unk_106D88DC, 6, (int)off_1065C9F0);
  return 1;
}

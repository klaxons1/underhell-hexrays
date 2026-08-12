int sub_1028F6E0()
{
  if ( (dword_106D8C38 & 1) == 0 )
  {
    dword_106D8C38 |= 1u;
    sub_10122040((int)&unk_106D8B08, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D8B54,
      (int)"baseclass",
      0,
      (int)off_1065CB08,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106D8BA0, (int)"m_nType", 24, 4, 2, 1, 0);
    sub_10121E50((int)&unk_106D8BEC, (int)"m_vecDirection", 28, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    atexit(sub_10476030);
  }
  sub_10121D00(byte_106D8C50, (int)&unk_106D8B54, 3, (int)off_1065CA18);
  return 1;
}

int sub_1028CD00()
{
  if ( (dword_106D71C4 & 1) == 0 )
  {
    dword_106D71C4 |= 1u;
    sub_10122040((int)&unk_106D7048, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D7094,
      (int)"baseclass",
      0,
      (int)off_1065A4D0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106D70E0, (int)"m_vecOrigin", 12, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106D712C, (int)"m_nEntity", 24, 4, 11, 1, 0);
    sub_10122040((int)&unk_106D7178, (int)"m_nIndex", 28, 4, 9, 1, 0);
    atexit(sub_10475CC0);
  }
  sub_10121D00(byte_106D71DC, (int)&unk_106D7094, 4, (int)off_1065C874);
  return 1;
}

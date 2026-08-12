int sub_10292EE0()
{
  if ( (dword_106DAFA0 & 1) == 0 )
  {
    dword_106DAFA0 |= 1u;
    sub_10122040((int)&unk_106DAE70, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106DAEBC,
      (int)"baseclass",
      0,
      (int)off_1065A4D0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106DAF08, (int)"m_vecOrigin", 12, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106DAF54, (int)"m_nIndex", 24, 4, 9, 1, 0);
    atexit(sub_10476500);
  }
  sub_10121D00(byte_106DAFB8, (int)&unk_106DAEBC, 3, (int)off_1065CC54);
  return 1;
}

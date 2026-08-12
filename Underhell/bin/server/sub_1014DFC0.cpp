int sub_1014DFC0()
{
  if ( (dword_106B1D44 & 1) == 0 )
  {
    dword_106B1D44 |= 1u;
    sub_10122040((int)&unk_106B1BC8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106B1C14,
      (int)"baseclass",
      0,
      (int)off_1065CB08,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106B1C60, (int)"m_flSize", 24, 4, -1, 2, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106B1CAC, (int)"m_flSpeed", 28, 4, -1, 2, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121E50((int)&unk_106B1CF8, (int)"m_vecDirection", 32, 12, 4, 0, -1.0, 1.0, (int)sub_10121AA0);
    atexit(sub_10471420);
  }
  sub_10121D00(byte_106B21AC, (int)&unk_106B1C14, 4, (int)off_10626354[0]);
  return 1;
}

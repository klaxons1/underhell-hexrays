int sub_102904F0()
{
  if ( (dword_106D95CC & 1) == 0 )
  {
    dword_106D95CC |= 1u;
    sub_10122040((int)&unk_106D9450, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D949C,
      (int)"baseclass",
      0,
      (int)off_1065A4D0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106D94E8, (int)"m_vecOrigin", 12, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106D9534, (int)"m_vecNormal", 24, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106D9580, (int)"m_iType", 36, 4, 32, 1, 0);
    atexit(sub_10476110);
  }
  sub_10121D00(byte_106D95E4, (int)&unk_106D949C, 4, (int)off_1065CA84);
  return 1;
}

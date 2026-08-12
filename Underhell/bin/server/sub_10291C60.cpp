int sub_10291C60()
{
  if ( (dword_106DA53C & 1) == 0 )
  {
    dword_106DA53C |= 1u;
    sub_10122040((int)&unk_106DA458, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106DA4A4,
      (int)"baseclass",
      0,
      (int)off_1065CB08,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106DA4F0, (int)"m_vecEnd", 24, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    atexit(sub_10476370);
  }
  sub_10121D00(byte_106DA554, (int)&unk_106DA4A4, 2, (int)off_1065CBA8);
  return 1;
}

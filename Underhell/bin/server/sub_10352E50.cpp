int sub_10352E50()
{
  if ( (dword_106E6BC4 & 1) == 0 )
  {
    dword_106E6BC4 |= 1u;
    sub_10122040((int)&unk_106E6AE0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106E6B2C,
      (int)"baseclass",
      0,
      (int)off_10660BF4,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106E6B78, (int)"m_vecHitPos", 4240, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    atexit(sub_10478090);
  }
  sub_10121D00(byte_106E6A5C, (int)&unk_106E6B2C, 2, (int)off_10671A88);
  return 1;
}

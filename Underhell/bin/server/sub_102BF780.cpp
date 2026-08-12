int sub_102BF780()
{
  if ( (dword_106DDF30 & 1) == 0 )
  {
    dword_106DDF30 |= 1u;
    sub_10122040((int)&unk_106DDE00, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106DDE4C,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106DDE98, (int)"m_bOn", 800, 1, 1, 1, 0);
    sub_10121D30((int)&unk_106DDEE4, (int)"m_flDensity", 804, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_10476AB0);
  }
  sub_10121D00(byte_106DDF6C, (int)&unk_106DDE4C, 3, (int)off_106622F0);
  return 1;
}

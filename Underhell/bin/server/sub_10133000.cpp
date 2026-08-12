int sub_10133000()
{
  if ( (dword_106AF798 & 1) == 0 )
  {
    dword_106AF798 |= 1u;
    sub_10122040((int)&unk_106AF668, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106AF6B4,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106AF700, (int)"m_flDuration", 800, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106AF74C, (int)"m_nType", 804, 4, 32, 1, 0);
    atexit(sub_10470E20);
  }
  sub_10121D00(byte_106AFAD8, (int)&unk_106AF6B4, 3, (int)off_1061F1C8[0]);
  return 1;
}

int sub_104153F0()
{
  if ( (dword_106F12F0 & 1) == 0 )
  {
    dword_106F12F0 |= 1u;
    sub_10122040((int)&unk_106F1128, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106F1174,
      (int)"baseclass",
      0,
      (int)off_1065CB08,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106F11C0, (int)"m_vecNormal", 24, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121D30((int)&unk_106F120C, (int)"m_flScale", 36, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106F1258, (int)"m_nRadius", 40, 4, 32, 1, 0);
    sub_10122040((int)&unk_106F12A4, (int)"m_nMagnitude", 44, 4, 32, 1, 0);
    atexit(sub_10479D10);
  }
  sub_10121D00(byte_106F135C, (int)&unk_106F1174, 5, (int)off_10688FE4);
  return 1;
}

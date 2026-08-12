int sub_10321C30()
{
  if ( (dword_106E53B0 & 1) == 0 )
  {
    dword_106E53B0 |= 1u;
    sub_10122040((int)&unk_106E51E8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106E5234,
      (int)"baseclass",
      0,
      (int)off_105FE144,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106E5280, (int)"m_flAltitude", 3668, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121E50((int)&unk_106E52CC, (int)"m_vecRoot", 3696, 12, 0, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106E5318, (int)"m_vecTip", 3708, 12, 0, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106E5364, (int)"m_vecTipDrawOffset", 3720, 12, 0, 4, 0.0, -121121.12, (int)sub_10121AA0);
    atexit(sub_10477BB0);
  }
  sub_10121D00(byte_106E5160, (int)&unk_106E5234, 5, (int)off_1066D30C);
  return 1;
}

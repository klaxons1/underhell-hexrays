int sub_102BA4A0()
{
  if ( (dword_106DD5DC & 1) == 0 )
  {
    dword_106DD5DC |= 1u;
    sub_10122040((int)&unk_106DD460, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106DD4AC,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106DD4F8, (int)"m_nState", 824, 4, 8, 1, 0);
    sub_10121D30((int)&unk_106DD544, (int)"m_flDuration", 828, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106DD590, (int)"m_flStartTime", 832, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_104769B0);
  }
  sub_10121D00(byte_106DD618, (int)&unk_106DD4AC, 4, (int)off_10661198[0]);
  return 1;
}

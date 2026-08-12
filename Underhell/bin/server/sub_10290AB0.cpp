int sub_10290AB0()
{
  if ( (dword_106D9A98 & 1) == 0 )
  {
    dword_106D9A98 |= 1u;
    sub_10122040((int)&unk_106D98D0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D991C,
      (int)"baseclass",
      0,
      (int)off_1065A4D0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106D9968, (int)"m_vecOrigin", 12, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106D99B4, (int)"m_vecAngles", 24, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121D30((int)&unk_106D9A00, (int)"m_flScale", 36, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106D9A4C, (int)"m_nType", 40, 4, 32, 1, 0);
    atexit(sub_10476200);
  }
  sub_10121D00(byte_106D9AB0, (int)&unk_106D991C, 5, (int)off_1065CB04);
  return 1;
}

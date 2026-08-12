int sub_10290D50()
{
  if ( (dword_106D9C74 & 1) == 0 )
  {
    dword_106D9C74 |= 1u;
    sub_10122040((int)&unk_106D9AF8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D9B44,
      (int)"baseclass",
      0,
      (int)off_1065A4D0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106D9B90, (int)"m_vecOrigin[0]", -12, 4, -1, 2, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D9BDC, (int)"m_vecOrigin[1]", -16, 4, -1, 2, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D9C28, (int)"m_vecOrigin[2]", -20, 4, -1, 2, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_10476230);
  }
  sub_10121D00(byte_106D9C8C, (int)&unk_106D9B44, 4, (int)off_1065CB0C);
  return 1;
}

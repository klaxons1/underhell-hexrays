int sub_10292610()
{
  if ( (dword_106DAB50 & 1) == 0 )
  {
    dword_106DAB50 |= 1u;
    sub_10122040((int)&unk_106DA988, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106DA9D4,
      (int)"baseclass",
      0,
      (int)off_1065A4D0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106DAA20, (int)"m_vecOrigin", 12, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106DAA6C, (int)"m_nModelIndex", 24, 4, 11, 0, 0);
    sub_10121D30((int)&unk_106DAAB8, (int)"m_fScale", 28, 4, 8, 8, 0.0, 25.6, (int)sub_10121A20);
    sub_10122040((int)&unk_106DAB04, (int)"m_nBrightness", 32, 4, 8, 1, 0);
    atexit(sub_10476460);
  }
  sub_10121D00(byte_106DAB68, (int)&unk_106DA9D4, 5, (int)off_1065CC08);
  return 1;
}

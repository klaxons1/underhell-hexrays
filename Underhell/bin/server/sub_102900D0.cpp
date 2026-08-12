int sub_102900D0()
{
  if ( (dword_106D93F4 & 1) == 0 )
  {
    dword_106D93F4 |= 1u;
    sub_10122040((int)&unk_106D91E0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D922C,
      (int)"baseclass",
      0,
      (int)off_1065A4D0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106D9278, (int)"m_vecOrigin", 12, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106D92C4, (int)"m_nModelIndex", 24, 4, 11, 0, 0);
    sub_10121D30((int)&unk_106D9310, (int)"m_fScale", 28, 4, 8, 8, 0.0, 25.6, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D935C, (int)"m_fLife", 32, 4, 8, 8, 0.0, 25.6, (int)sub_10121A20);
    sub_10122040((int)&unk_106D93A8, (int)"m_nBrightness", 36, 4, 8, 1, 0);
    atexit(sub_104760C0);
  }
  sub_10121D00(byte_106D940C, (int)&unk_106D922C, 6, (int)off_1065CA64);
  return 1;
}

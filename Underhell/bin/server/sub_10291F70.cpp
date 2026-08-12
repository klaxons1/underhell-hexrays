int sub_10291F70()
{
  if ( (dword_106DA758 & 1) == 0 )
  {
    dword_106DA758 |= 1u;
    sub_10122040((int)&unk_106DA590, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106DA5DC,
      (int)"baseclass",
      0,
      (int)off_1065A4D0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106DA628, (int)"m_vecOrigin", 12, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106DA674, (int)"m_nModelIndex", 24, 4, 11, 0, 0);
    sub_10121D30((int)&unk_106DA6C0, (int)"m_fScale", 28, 4, 8, 8, 0.0, 25.6, (int)sub_10121A20);
    sub_10122040((int)&unk_106DA70C, (int)"m_nFrameRate", 32, 4, 8, 1, 0);
    atexit(sub_104763C0);
  }
  sub_10121D00(byte_106DA770, (int)&unk_106DA5DC, 5, (int)off_1065CBC8);
  return 1;
}

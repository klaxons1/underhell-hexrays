int sub_10290810()
{
  if ( (dword_106D9880 & 1) == 0 )
  {
    dword_106D9880 |= 1u;
    sub_10122040((int)&unk_106D9750, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D979C,
      (int)"baseclass",
      0,
      (int)off_1065CB08,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106D97E8, (int)"m_nModelIndex", 24, 4, 11, 0, 0);
    sub_10122040((int)&unk_106D9834, (int)"m_nReversed", 28, 4, 2, 1, 0);
    atexit(sub_104761B0);
  }
  sub_10121D00(byte_106D9898, (int)&unk_106D979C, 3, (int)off_1065CADC);
  return 1;
}

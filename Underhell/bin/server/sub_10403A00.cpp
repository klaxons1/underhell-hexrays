int sub_10403A00()
{
  if ( (dword_106F0400 & 1) == 0 )
  {
    dword_106F0400 |= 1u;
    sub_10122040((int)&unk_106F0368, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106F03B4,
      (int)"baseclass",
      0,
      (int)off_106609C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10479960);
  }
  sub_10121D00(byte_106F0484, (int)&unk_106F03B4, 1, (int)off_106865DC);
  return 1;
}

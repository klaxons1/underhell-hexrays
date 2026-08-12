int sub_102784C0()
{
  if ( (dword_106D0500 & 1) == 0 )
  {
    dword_106D0500 |= 1u;
    sub_10122040((int)&unk_106D0468, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D04B4,
      (int)"baseclass",
      0,
      (int)off_106607F4,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10474EB0);
  }
  sub_10121D00(byte_106D05CC, (int)&unk_106D04B4, 1, (int)off_10657710[0]);
  return 1;
}

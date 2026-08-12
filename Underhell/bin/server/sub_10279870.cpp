int sub_10279870()
{
  if ( (dword_106D0A58 & 1) == 0 )
  {
    dword_106D0A58 |= 1u;
    sub_10122040((int)&unk_106D09C0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D0A0C,
      (int)"baseclass",
      0,
      (int)off_106609C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10474FD0);
  }
  sub_10121D00(byte_106D0B24, (int)&unk_106D0A0C, 1, (int)off_106579CC);
  return 1;
}

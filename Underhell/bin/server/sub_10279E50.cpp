int sub_10279E50()
{
  if ( (dword_106D0C00 & 1) == 0 )
  {
    dword_106D0C00 |= 1u;
    sub_10122040((int)&unk_106D0B68, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D0BB4,
      (int)"baseclass",
      0,
      (int)off_106609C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10475030);
  }
  sub_10121D00(byte_106D0CCC, (int)&unk_106D0BB4, 1, (int)off_10657C04);
  return 1;
}

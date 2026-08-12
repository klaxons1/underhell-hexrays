int sub_1027AE50()
{
  if ( (dword_106D0DA8 & 1) == 0 )
  {
    dword_106D0DA8 |= 1u;
    sub_10122040((int)&unk_106D0D10, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D0D5C,
      (int)"baseclass",
      0,
      (int)off_106609C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10475090);
  }
  sub_10121D00(byte_106D0E74, (int)&unk_106D0D5C, 1, (int)off_10657E3C);
  return 1;
}

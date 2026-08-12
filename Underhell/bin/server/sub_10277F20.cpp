int sub_10277F20()
{
  if ( (dword_106D0350 & 1) == 0 )
  {
    dword_106D0350 |= 1u;
    sub_10122040((int)&unk_106D02B8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D0304,
      (int)"baseclass",
      0,
      (int)off_106607F4,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10474E50);
  }
  sub_10121D00(byte_106D03FC, (int)&unk_106D0304, 1, (int)off_10657684);
  return 1;
}

int sub_10282700()
{
  if ( (dword_106D2458 & 1) == 0 )
  {
    dword_106D2458 |= 1u;
    sub_10122040((int)&unk_106D23C0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D240C,
      (int)"baseclass",
      0,
      (int)off_10612678,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10475510);
  }
  sub_10121D00(byte_106D2470, (int)&unk_106D240C, 1, (int)off_1065A58C);
  return 1;
}

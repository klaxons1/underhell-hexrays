int sub_102779E0()
{
  if ( (dword_106D01A0 & 1) == 0 )
  {
    dword_106D01A0 |= 1u;
    sub_10122040((int)&unk_106D0108, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D0154,
      (int)"baseclass",
      0,
      (int)off_106607F4,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10474DF0);
  }
  sub_10121D00(byte_106D024C, (int)&unk_106D0154, 1, (int)off_10657604);
  return 1;
}

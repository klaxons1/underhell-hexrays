int sub_103F40D0()
{
  if ( (dword_106EEE70 & 1) == 0 )
  {
    dword_106EEE70 |= 1u;
    sub_10122040((int)&unk_106EEDD8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EEE24,
      (int)"baseclass",
      0,
      (int)off_106609C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10479490);
  }
  sub_10121D00(byte_106EEEE8, (int)&unk_106EEE24, 1, (int)off_10684804);
  return 1;
}

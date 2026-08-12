int sub_103F6DD0()
{
  if ( (dword_106EF730 & 1) == 0 )
  {
    dword_106EF730 |= 1u;
    sub_10122040((int)&unk_106EF698, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EF6E4,
      (int)"baseclass",
      0,
      (int)off_106609C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_104796A0);
  }
  sub_10121D00(byte_106EF950, (int)&unk_106EF6E4, 1, (int)off_106852E0[0]);
  return 1;
}

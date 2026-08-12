int sub_103F8C70()
{
  if ( (dword_106EFC80 & 1) == 0 )
  {
    dword_106EFC80 |= 1u;
    sub_10122040((int)&unk_106EFBE8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EFC34,
      (int)"baseclass",
      0,
      (int)off_106609C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_104797A0);
  }
  sub_10121D00(byte_106EFCBC, (int)&unk_106EFC34, 1, (int)off_1068552C);
  return 1;
}

int sub_103F6A50()
{
  if ( (dword_106EF570 & 1) == 0 )
  {
    dword_106EF570 |= 1u;
    sub_10122040((int)&unk_106EF4D8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EF524,
      (int)"baseclass",
      0,
      (int)off_106609C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10479630);
  }
  sub_10121D00(byte_106EF630, (int)&unk_106EF524, 1, (int)off_1068525C);
  return 1;
}

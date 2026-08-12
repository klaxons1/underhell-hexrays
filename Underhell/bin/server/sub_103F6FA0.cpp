int sub_103F6FA0()
{
  if ( (dword_106EF7D0 & 1) == 0 )
  {
    dword_106EF7D0 |= 1u;
    sub_10122040((int)&unk_106EF738, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EF784,
      (int)"baseclass",
      0,
      (int)off_1060E0C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_104796C0);
  }
  sub_10121D00(byte_106EF918, (int)&unk_106EF784, 1, (int)off_10685348);
  return 1;
}

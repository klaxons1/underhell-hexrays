int sub_101516C0()
{
  if ( (dword_106B2870 & 1) == 0 )
  {
    dword_106B2870 |= 1u;
    sub_10122040((int)&unk_106B27D8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106B2824,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_104715D0);
  }
  sub_10121D00(byte_106B2888, (int)&unk_106B2824, 1, (int)off_106271F0);
  return 1;
}

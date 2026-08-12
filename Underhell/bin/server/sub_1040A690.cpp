int sub_1040A690()
{
  if ( (dword_106F08C8 & 1) == 0 )
  {
    dword_106F08C8 |= 1u;
    sub_10122040((int)&unk_106F0830, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106F087C,
      (int)"baseclass",
      0,
      (int)off_10660830,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10479AC0);
  }
  sub_10121D00(byte_106F0910, (int)&unk_106F087C, 1, (int)off_10687744[0]);
  return 1;
}

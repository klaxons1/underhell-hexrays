int sub_103F89D0()
{
  if ( (dword_106EFBB8 & 1) == 0 )
  {
    dword_106EFBB8 |= 1u;
    sub_10122040((int)&unk_106EFB20, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EFB6C,
      (int)"baseclass",
      0,
      (int)off_1060E7F0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10479770);
  }
  sub_10121D00(byte_106EFBD0, (int)&unk_106EFB6C, 1, (int)off_106854B0);
  return 1;
}

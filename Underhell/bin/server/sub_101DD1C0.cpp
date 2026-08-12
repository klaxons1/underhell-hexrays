int sub_101DD1C0()
{
  if ( (dword_106BB098 & 1) == 0 )
  {
    dword_106BB098 |= 1u;
    sub_10122040((int)&unk_106BB000, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106BB04C,
      (int)"baseclass",
      0,
      (int)off_1060D114,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_104731C0);
  }
  sub_10121D00(byte_106BB4B0, (int)&unk_106BB04C, 1, (int)off_1063B150[0]);
  return 1;
}

int sub_103F5ED0()
{
  if ( (dword_106EF3D8 & 1) == 0 )
  {
    dword_106EF3D8 |= 1u;
    sub_10122040((int)&unk_106EF340, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EF38C,
      (int)"baseclass",
      0,
      (int)off_106609C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_104795C0);
  }
  sub_10121D00(byte_106EF410, (int)&unk_106EF38C, 1, (int)off_10684FEC);
  return 1;
}

int sub_103F53A0()
{
  if ( (dword_106EF200 & 1) == 0 )
  {
    dword_106EF200 |= 1u;
    sub_10122040((int)&unk_106EF168, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EF1B4,
      (int)"baseclass",
      0,
      (int)off_10660814,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10479580);
  }
  sub_10121D00(byte_106EF318, (int)&unk_106EF1B4, 1, (int)off_10684ED4);
  return 1;
}

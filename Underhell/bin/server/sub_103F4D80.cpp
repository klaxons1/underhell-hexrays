int sub_103F4D80()
{
  if ( (dword_106EF0F8 & 1) == 0 )
  {
    dword_106EF0F8 |= 1u;
    sub_10122040((int)&unk_106EF060, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EF0AC,
      (int)"baseclass",
      0,
      (int)off_106609C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10479510);
  }
  sub_10121D00(byte_106EF130, (int)&unk_106EF0AC, 1, (int)off_10684BB4);
  return 1;
}

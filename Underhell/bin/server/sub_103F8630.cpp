int sub_103F8630()
{
  if ( (dword_106EFA08 & 1) == 0 )
  {
    dword_106EFA08 |= 1u;
    sub_10122040((int)&unk_106EF970, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EF9BC,
      (int)"baseclass",
      0,
      (int)off_106607F4,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10479740);
  }
  sub_10121D00(byte_106EFAB4, (int)&unk_106EF9BC, 1, (int)off_10685450);
  return 1;
}

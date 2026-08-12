int sub_1027D550()
{
  if ( (dword_106D1498 & 1) == 0 )
  {
    dword_106D1498 |= 1u;
    sub_10122040((int)&unk_106D1400, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D144C,
      (int)"baseclass",
      0,
      (int)off_106609C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10475210);
  }
  sub_10121D00(byte_106D151C, (int)&unk_106D144C, 1, (int)off_10658768);
  return 1;
}

int sub_1027BA80()
{
  if ( (dword_106D10B0 & 1) == 0 )
  {
    dword_106D10B0 |= 1u;
    sub_10122040((int)&unk_106D1018, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D1064,
      (int)"baseclass",
      0,
      (int)off_106609C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10475140);
  }
  sub_10121D00(byte_106D1194, (int)&unk_106D1064, 1, (int)off_106580C0[0]);
  return 1;
}

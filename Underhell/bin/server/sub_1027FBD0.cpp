int sub_1027FBD0()
{
  if ( (dword_106D1B60 & 1) == 0 )
  {
    dword_106D1B60 |= 1u;
    sub_10122040((int)&unk_106D1AC8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D1B14,
      (int)"baseclass",
      0,
      (int)off_10660830,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_104753A0);
  }
  sub_10121D00(byte_106D1BF4, (int)&unk_106D1B14, 1, (int)off_1065953C[0]);
  return 1;
}

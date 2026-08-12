int sub_1027FE10()
{
  if ( (dword_106D1CB8 & 1) == 0 )
  {
    dword_106D1CB8 |= 1u;
    sub_10122040((int)&unk_106D1C20, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D1C6C,
      (int)"baseclass",
      0,
      (int)off_10660830,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_104753F0);
  }
  sub_10121D00(byte_106D1D4C, (int)&unk_106D1C6C, 1, (int)off_1065983C[0]);
  return 1;
}

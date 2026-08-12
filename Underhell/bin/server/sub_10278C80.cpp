int sub_10278C80()
{
  if ( (dword_106D06D8 & 1) == 0 )
  {
    dword_106D06D8 |= 1u;
    sub_10122040((int)&unk_106D0640, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D068C,
      (int)"baseclass",
      0,
      (int)off_106607F4,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10474F20);
  }
  sub_10121D00(byte_106D0784, (int)&unk_106D068C, 1, (int)off_1065781C);
  return 1;
}

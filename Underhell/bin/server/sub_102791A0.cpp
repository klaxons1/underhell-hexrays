int sub_102791A0()
{
  if ( (dword_106D0888 & 1) == 0 )
  {
    dword_106D0888 |= 1u;
    sub_10122040((int)&unk_106D07F0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D083C,
      (int)"baseclass",
      0,
      (int)off_106607F4,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10474F80);
  }
  sub_10121D00(byte_106D0934, (int)&unk_106D083C, 1, (int)off_1065789C);
  return 1;
}

int sub_103F69D0()
{
  if ( (dword_106EF4D0 & 1) == 0 )
  {
    dword_106EF4D0 |= 1u;
    sub_10122040((int)&unk_106EF438, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EF484,
      (int)"baseclass",
      0,
      (int)off_10685128,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10479610);
  }
  sub_10121D00(byte_106EF66C, (int)&unk_106EF484, 1, (int)off_10685198[0]);
  return 1;
}

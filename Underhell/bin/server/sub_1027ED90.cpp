int sub_1027ED90()
{
  if ( (dword_106D18B8 & 1) == 0 )
  {
    dword_106D18B8 |= 1u;
    sub_10122040((int)&unk_106D1820, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D186C,
      (int)"baseclass",
      0,
      (int)off_106609C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10475300);
  }
  sub_10121D00(byte_106D193C, (int)&unk_106D186C, 1, (int)off_10658F9C);
  return 1;
}

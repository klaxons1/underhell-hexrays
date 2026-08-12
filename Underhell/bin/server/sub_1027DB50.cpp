int sub_1027DB50()
{
  if ( (dword_106D15F8 & 1) == 0 )
  {
    dword_106D15F8 |= 1u;
    sub_10122040((int)&unk_106D1560, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D15AC,
      (int)"baseclass",
      0,
      (int)off_106609C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10475260);
  }
  sub_10121D00(byte_106D167C, (int)&unk_106D15AC, 1, (int)off_10658A24);
  return 1;
}

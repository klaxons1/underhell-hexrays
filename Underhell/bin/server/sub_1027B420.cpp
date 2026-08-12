int sub_1027B420()
{
  if ( (dword_106D0F38 & 1) == 0 )
  {
    dword_106D0F38 |= 1u;
    sub_10122040((int)&unk_106D0EA0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D0EEC,
      (int)"baseclass",
      0,
      (int)off_106609C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_104750E0);
  }
  sub_10121D00(byte_106D0FF8, (int)&unk_106D0EEC, 1, (int)off_10657FB4);
  return 1;
}

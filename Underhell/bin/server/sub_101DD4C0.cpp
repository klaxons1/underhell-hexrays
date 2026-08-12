int sub_101DD4C0()
{
  if ( (dword_106BB138 & 1) == 0 )
  {
    dword_106BB138 |= 1u;
    sub_10122040((int)&unk_106BB0A0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106BB0EC,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_104731E0);
  }
  sub_10121D00(byte_106BB468, (int)&unk_106BB0EC, 1, (int)off_1063B3E0[0]);
  return 1;
}

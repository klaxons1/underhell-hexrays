int sub_1027CA10()
{
  if ( (dword_106D1258 & 1) == 0 )
  {
    dword_106D1258 |= 1u;
    sub_10122040((int)&unk_106D11C0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D120C,
      (int)"baseclass",
      0,
      (int)off_10660814,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_104751C0);
  }
  sub_10121D00(byte_106D13C8, (int)&unk_106D120C, 1, (int)off_10658450[0]);
  return 1;
}

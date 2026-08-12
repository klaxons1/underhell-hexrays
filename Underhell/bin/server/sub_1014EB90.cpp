int sub_1014EB90()
{
  if ( (dword_106B2290 & 1) == 0 )
  {
    dword_106B2290 |= 1u;
    sub_10122040((int)&unk_106B21F8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106B2244,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_104714D0);
  }
  sub_10121D00(byte_106B2528, (int)&unk_106B2244, 1, (int)off_10626820[0]);
  return 1;
}

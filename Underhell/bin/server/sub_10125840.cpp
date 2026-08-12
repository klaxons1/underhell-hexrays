int sub_10125840()
{
  int v0; // eax

  if ( (dword_1069D9F4 & 1) == 0 )
  {
    dword_1069D9F4 |= 1u;
    sub_10122040((int)&unk_1069D910, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_1069D95C,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    v0 = sub_10421D60(4);
    sub_10122040((int)&unk_1069D9A8, (int)"m_nPrecipType", 800, 4, v0 + 1, 1, 0);
    atexit(sub_104709A0);
  }
  sub_10121D00(byte_1069DD6C, (int)&unk_1069D95C, 2, (int)off_1061A054[0]);
  return 1;
}

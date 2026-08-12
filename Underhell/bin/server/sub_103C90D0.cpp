int sub_103C90D0()
{
  if ( (dword_106EC45C & 1) == 0 )
  {
    dword_106EC45C |= 1u;
    sub_10122040((int)&unk_106EC378, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EC3C4,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234700((int)&unk_106EC410, (int)"m_bFadeOut", 800, 1);
    atexit(sub_10478E60);
  }
  sub_10121D00(byte_106EC244, (int)&unk_106EC3C4, 2, (int)off_1067CEE8[0]);
  return 1;
}

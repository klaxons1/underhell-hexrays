int sub_1012AFB0()
{
  if ( (dword_1069E34C & 1) == 0 )
  {
    dword_1069E34C |= 1u;
    sub_10122040((int)&unk_1069E268, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_1069E2B4,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234730(&unk_1069E300, "m_hEntAttached", 800, 4, -1, sub_10234830);
    atexit(sub_10470B50);
  }
  sub_10121D00(byte_1069E388, (int)&unk_1069E2B4, 2, (int)off_1061BC38);
  return 1;
}

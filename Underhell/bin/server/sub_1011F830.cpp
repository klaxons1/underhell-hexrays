int sub_1011F830()
{
  if ( (dword_1069C6F4 & 1) == 0 )
  {
    dword_1069C6F4 |= 1u;
    sub_10122040(&unk_1069C610, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      &unk_1069C65C,
      "baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_1069C6A8, (int)"m_flWaveHeight", 1004, 4, 8, 16, 0.0, 8.0, (int)sub_10121A20);
    atexit(sub_10470810);
  }
  sub_10121D00(&unk_1069C65C, 2, off_10616B88[0]);
  return 1;
}

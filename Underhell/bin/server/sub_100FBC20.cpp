int sub_100FBC20()
{
  if ( (dword_1069A1F4 & 1) == 0 )
  {
    dword_1069A1F4 |= 1u;
    sub_10122040(&unk_1069A110, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      &unk_1069A15C,
      "baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_1069A1A8, (int)"m_flConveyorSpeed", 816, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_10470200);
  }
  sub_10121D00(&unk_1069A15C, 2, off_106132A0[0]);
  return 1;
}

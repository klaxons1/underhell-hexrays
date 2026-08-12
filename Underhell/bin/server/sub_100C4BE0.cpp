int sub_100C4BE0()
{
  if ( (dword_106963D4 & 1) == 0 )
  {
    dword_106963D4 |= 1u;
    sub_10122040(&unk_106962F0, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      &unk_1069633C,
      "baseclass",
      0,
      off_1060D114,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_101221E0(
      &unk_10696388,
      "overlay_vars",
      0,
      &unk_106966AC,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_1046F930);
  }
  sub_10121D00(&unk_1069633C, 2, off_1060DBA4[0]);
  return 1;
}

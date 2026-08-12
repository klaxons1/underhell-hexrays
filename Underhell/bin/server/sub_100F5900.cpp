int sub_100F5900()
{
  if ( (dword_10699158 & 1) == 0 )
  {
    dword_10699158 |= 1u;
    sub_10122040(&unk_106990C0, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      &unk_1069910C,
      "baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_104700C0);
  }
  sub_10121D00(&unk_1069910C, 1, off_106126A0[0]);
  return 1;
}

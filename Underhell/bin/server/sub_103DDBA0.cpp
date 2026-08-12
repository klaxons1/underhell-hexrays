int sub_103DDBA0()
{
  if ( (dword_106ED50C & 1) == 0 )
  {
    dword_106ED50C |= 1u;
    sub_10122040((int)&unk_106ED428, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106ED474,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106ED4C0, (int)"m_flAltitude", 804, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_10479120);
  }
  sub_10121D00(byte_106ED544, (int)&unk_106ED474, 2, (int)off_106807BC);
  return 1;
}

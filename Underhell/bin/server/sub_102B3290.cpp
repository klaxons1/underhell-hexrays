int sub_102B3290()
{
  if ( (dword_106DC164 & 1) == 0 )
  {
    dword_106DC164 |= 1u;
    sub_10122040((int)&unk_106DC080, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106DC0CC,
      (int)"baseclass",
      0,
      (int)off_105FE144,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234790((int)&unk_106DC118, (int)"m_flStartupTime", 3920, 4);
    atexit(sub_10476900);
  }
  sub_10121D00(byte_106DCA6C, (int)&unk_106DC0CC, 2, (int)off_10660C38);
  return 1;
}

int sub_103EB180()
{
  if ( (dword_106EE694 & 1) == 0 )
  {
    dword_106EE694 |= 1u;
    sub_10122040((int)&unk_106EE5B0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EE5FC,
      (int)"baseclass",
      0,
      (int)off_10653D5C,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234700((int)&unk_106EE648, (int)"m_bHeadlightIsOn", 1945, 1);
    atexit(sub_10479350);
  }
  sub_10121D00(byte_106EE7CC, (int)&unk_106EE5FC, 2, (int)off_10682B74);
  return 1;
}

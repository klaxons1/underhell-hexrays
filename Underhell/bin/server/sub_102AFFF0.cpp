int sub_102AFFF0()
{
  if ( (dword_106DBD68 & 1) == 0 )
  {
    dword_106DBD68 |= 1u;
    sub_10122040((int)&unk_106DBCD0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106DBD1C,
      (int)"baseclass",
      0,
      (int)off_106609C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10476800);
  }
  sub_10121D00(byte_106DBD80, (int)&unk_106DBD1C, 1, (int)off_10660810);
  return 1;
}

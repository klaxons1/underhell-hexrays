int sub_102B10D0()
{
  if ( (dword_106DBEE0 & 1) == 0 )
  {
    dword_106DBEE0 |= 1u;
    sub_10122040((int)&unk_106DBE48, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106DBE94,
      (int)"baseclass",
      0,
      (int)off_106609C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10476860);
  }
  sub_10121D00(byte_106DBF38, (int)&unk_106DBE94, 1, (int)off_10660854);
  return 1;
}

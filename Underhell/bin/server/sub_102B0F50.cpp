int sub_102B0F50()
{
  if ( (dword_106DBE40 & 1) == 0 )
  {
    dword_106DBE40 |= 1u;
    sub_10122040((int)&unk_106DBDA8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106DBDF4,
      (int)"baseclass",
      0,
      (int)off_10660814,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10476840);
  }
  sub_10121D00(byte_106DBF68, (int)&unk_106DBDF4, 1, (int)off_10660850[0]);
  return 1;
}

int sub_102B1F70()
{
  if ( (dword_106DC058 & 1) == 0 )
  {
    dword_106DC058 |= 1u;
    sub_10122040((int)&unk_106DBFC0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106DC00C,
      (int)"baseclass",
      0,
      (int)off_1060E7F0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_104768B0);
  }
  sub_10121D00(byte_106DBFA0, (int)&unk_106DC00C, 1, (int)off_10660A48);
  return 1;
}

int sub_103F46F0()
{
  if ( (dword_106EEFA0 & 1) == 0 )
  {
    dword_106EEFA0 |= 1u;
    sub_10122040((int)&unk_106EEF08, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EEF54,
      (int)"baseclass",
      0,
      (int)off_10660830,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_104794D0);
  }
  sub_10121D00(byte_106EF028, (int)&unk_106EEF54, 1, (int)off_10684A88);
  return 1;
}

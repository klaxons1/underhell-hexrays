int sub_10327BE0()
{
  if ( (dword_106E5490 & 1) == 0 )
  {
    dword_106E5490 |= 1u;
    sub_10122040((int)&unk_106E53F8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106E5444,
      (int)"baseclass",
      0,
      (int)off_105FE144,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10477C10);
  }
  sub_10121D00(byte_106E5514, (int)&unk_106E5444, 1, (int)off_1066DB94);
  return 1;
}

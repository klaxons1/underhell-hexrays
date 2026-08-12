int sub_1024ED20()
{
  if ( (dword_106C7418 & 1) == 0 )
  {
    dword_106C7418 |= 1u;
    sub_10122040((int)&unk_106C7380, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106C73CC,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10474670);
  }
  sub_10121D00(byte_106C75B0, (int)&unk_106C73CC, 1, (int)off_10650264[0]);
  return 1;
}

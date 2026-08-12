int sub_10242250()
{
  if ( (dword_106C5668 & 1) == 0 )
  {
    dword_106C5668 |= 1u;
    sub_10122040((int)&unk_106C55D0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106C561C,
      (int)"baseclass",
      0,
      (int)off_1064DB3C,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_104741F0);
  }
  sub_10121D00(byte_106C5AB4, (int)&unk_106C561C, 1, (int)off_1064DB50[0]);
  return 1;
}

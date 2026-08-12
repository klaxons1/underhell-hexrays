int sub_10207CB0()
{
  if ( (dword_106C2250 & 1) == 0 )
  {
    dword_106C2250 |= 1u;
    sub_10122040((int)&unk_106C21B8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106C2204,
      (int)"baseclass",
      0,
      (int)off_10642FDC,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_104739D0);
  }
  sub_10121D00(byte_106C1EF8, (int)&unk_106C2204, 1, (int)off_10643114[0]);
  return 1;
}

int sub_10209130()
{
  if ( (dword_106C2600 & 1) == 0 )
  {
    dword_106C2600 |= 1u;
    sub_10122040((int)&unk_106C2568, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106C25B4,
      (int)"baseclass",
      0,
      (int)off_1060D114,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10473A80);
  }
  sub_10121D00(byte_106C1E34, (int)&unk_106C25B4, 1, (int)off_10643350[0]);
  return 1;
}

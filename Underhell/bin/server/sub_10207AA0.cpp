int sub_10207AA0()
{
  if ( (dword_106C21B4 & 1) == 0 )
  {
    dword_106C21B4 |= 1u;
    sub_10122040((int)&unk_106C20D0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106C211C,
      (int)"baseclass",
      0,
      (int)off_10642FA8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234700(&unk_106C2168, "m_bAwake", 1686, 1);
    atexit(sub_104739A0);
  }
  sub_10121D00(byte_106C1E9C, (int)&unk_106C211C, 2, (int)off_10643110[0]);
  return 1;
}

int sub_10292310()
{
  if ( (dword_106DA92C & 1) == 0 )
  {
    dword_106DA92C |= 1u;
    sub_10122040((int)&unk_106DA7B0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106DA7FC,
      (int)"baseclass",
      0,
      (int)off_1065CB08,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106DA848, (int)"m_nMagnitude", 24, 4, 4, 1, 0);
    sub_10122040((int)&unk_106DA894, (int)"m_nTrailLength", 28, 4, 4, 1, 0);
    sub_10121E50((int)&unk_106DA8E0, (int)"m_vecDir", 32, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    atexit(sub_10476410);
  }
  sub_10121D00(byte_106DA944, (int)&unk_106DA7FC, 4, (int)off_1065CBE8);
  return 1;
}

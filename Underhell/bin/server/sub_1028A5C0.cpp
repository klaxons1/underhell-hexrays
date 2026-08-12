int sub_1028A5C0()
{
  if ( (dword_106D5BAC & 1) == 0 )
  {
    dword_106D5BAC |= 1u;
    sub_10122040((int)&unk_106D5AC8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D5B14,
      (int)"baseclass",
      0,
      (int)off_1065C694[0],
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106D5B60, (int)"m_iEntIndex", 72, 4, 24, 1, 0);
    atexit(sub_104759F0);
  }
  sub_10121D00(byte_106D5BC4, (int)&unk_106D5B14, 2, (int)off_1065C724);
  return 1;
}

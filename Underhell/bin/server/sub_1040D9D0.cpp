int sub_1040D9D0()
{
  if ( (dword_106F0DEC & 1) == 0 )
  {
    dword_106F0DEC |= 1u;
    sub_10122040((int)&unk_106F0D08, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106F0D54,
      (int)"baseclass",
      0,
      (int)off_106607F4,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106F0DA0, (int)"m_bActive", 1400, 1, 1, 1, 0);
    atexit(sub_10479C00);
  }
  sub_10121D00(byte_106F0EB4, (int)&unk_106F0D54, 2, (int)off_10687E0C);
  return 1;
}

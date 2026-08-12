int sub_1028AAE0()
{
  if ( (dword_106D5F18 & 1) == 0 )
  {
    dword_106D5F18 |= 1u;
    sub_10122040((int)&unk_106D5DE8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D5E34,
      (int)"baseclass",
      0,
      (int)off_1065C694[0],
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106D5E80, (int)"m_vecStartPoint", 72, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106D5ECC, (int)"m_vecEndPoint", 84, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    atexit(sub_10475A90);
  }
  sub_10121D00(byte_106D5F34, (int)&unk_106D5E34, 3, (int)off_1065C76C);
  return 1;
}

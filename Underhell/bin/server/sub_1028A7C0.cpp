int sub_1028A7C0()
{
  if ( (dword_106D5D60 & 1) == 0 )
  {
    dword_106D5D60 |= 1u;
    sub_10122040((int)&unk_106D5C30, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D5C7C,
      (int)"baseclass",
      0,
      (int)off_1065C694[0],
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106D5CC8, (int)"m_nStartEntity", 72, 4, 24, 1, 0);
    sub_10122040((int)&unk_106D5D14, (int)"m_nEndEntity", 76, 4, 24, 1, 0);
    atexit(sub_10475A40);
  }
  sub_10121D00(byte_106D5D7C, (int)&unk_106D5C7C, 3, (int)off_1065C748);
  return 1;
}

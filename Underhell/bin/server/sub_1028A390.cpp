int sub_1028A390()
{
  if ( (dword_106D5A40 & 1) == 0 )
  {
    dword_106D5A40 |= 1u;
    sub_10122040((int)&unk_106D5910, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D595C,
      (int)"baseclass",
      0,
      (int)off_1065C694[0],
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106D59A8, (int)"m_nStartEntity", 72, 4, 24, 1, 0);
    sub_10122040((int)&unk_106D59F4, (int)"m_nEndEntity", 76, 4, 24, 1, 0);
    atexit(sub_104759A0);
  }
  sub_10121D00(byte_106D5A5C, (int)&unk_106D595C, 3, (int)off_1065C700);
  return 1;
}

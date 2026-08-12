int sub_1028B0C0()
{
  if ( (dword_106D60E0 & 1) == 0 )
  {
    dword_106D60E0 |= 1u;
    sub_10122040((int)&unk_106D5FB0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D5FFC,
      (int)"baseclass",
      0,
      (int)off_1065C694[0],
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106D6048, (int)"m_nStartEntity", 72, 4, 11, 1, 0);
    sub_10122040((int)&unk_106D6094, (int)"m_nEndEntity", 76, 4, 11, 1, 0);
    atexit(sub_10475AE0);
  }
  sub_10121D00(byte_106D60FC, (int)&unk_106D5FFC, 3, (int)off_1065C790);
  return 1;
}

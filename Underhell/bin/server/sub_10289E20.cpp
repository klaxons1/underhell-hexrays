int sub_10289E20()
{
  if ( (dword_106D5870 & 1) == 0 )
  {
    dword_106D5870 |= 1u;
    sub_10122040((int)&unk_106D56A8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D56F4,
      (int)"baseclass",
      0,
      (int)off_1065C694[0],
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106D5740, (int)"m_nStartEntity", 72, 4, 24, 1, 0);
    sub_10122040((int)&unk_106D578C, (int)"m_nEndEntity", 88, 4, 24, 1, 0);
    sub_10121E50((int)&unk_106D57D8, (int)"m_vecStartPoint", 76, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106D5824, (int)"m_vecEndPoint", 92, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    atexit(sub_10475950);
  }
  sub_10121D00(byte_106D588C, (int)&unk_106D56F4, 5, (int)off_1065C6DC);
  return 1;
}

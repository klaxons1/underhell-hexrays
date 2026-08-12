int sub_1028B400()
{
  if ( (dword_106D62E4 & 1) == 0 )
  {
    dword_106D62E4 |= 1u;
    sub_10122040((int)&unk_106D6168, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D61B4,
      (int)"baseclass",
      0,
      (int)off_1065C694[0],
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106D6200, (int)"m_vecCenter", 72, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121D30((int)&unk_106D624C, (int)"m_flStartRadius", 84, 4, 16, 16, 0.0, 4096.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D6298, (int)"m_flEndRadius", 88, 4, 16, 16, 0.0, 4096.0, (int)sub_10121A20);
    atexit(sub_10475B30);
  }
  sub_10121D00(byte_106D62FC, (int)&unk_106D61B4, 4, (int)off_1065C7B8);
  return 1;
}

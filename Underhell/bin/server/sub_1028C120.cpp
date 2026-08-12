int sub_1028C120()
{
  if ( (dword_106D6B80 & 1) == 0 )
  {
    dword_106D6B80 |= 1u;
    sub_10122040((int)&unk_106D6920, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D696C,
      (int)"baseclass",
      0,
      (int)off_1065CB08,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106D69B8, (int)"m_vecDirection", 24, 12, 11, 0, -10.0, 10.0, (int)sub_10121AA0);
    sub_10122040((int)&unk_106D6A04, (int)&unk_1053B95C, 36, 4, 8, 1, 0);
    sub_10122040((int)&unk_106D6A50, (int)&unk_1053B958, 40, 4, 8, 1, 0);
    sub_10122040((int)&unk_106D6A9C, (int)&unk_1053B954, 44, 4, 8, 1, 0);
    sub_10122040((int)&unk_106D6AE8, (int)"a", 48, 4, 8, 1, 0);
    sub_10122040((int)&unk_106D6B34, (int)"m_nAmount", 52, 4, 8, 1, 0);
    atexit(sub_10475C20);
  }
  sub_10121D00(byte_106D6B98, (int)&unk_106D696C, 7, (int)off_1065C82C);
  return 1;
}

int sub_1012E460()
{
  if ( (dword_106AE634 & 1) == 0 )
  {
    dword_106AE634 |= 1u;
    sub_10122040((int)&unk_106AE4B8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106AE504,
      (int)"baseclass",
      0,
      (int)off_10612678,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106AE550, (int)"m_iMaterialName", 800, 4, 10, 1, 0);
    sub_101221E0(
      (int)&unk_106AE59C,
      (int)"m_Info",
      804,
      (int)&unk_106AE7E0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234730(&unk_106AE5E8, "m_hConstraintEntity", 824, 4, -1, sub_10234830);
    atexit(sub_10470C60);
  }
  sub_10121D00(byte_106AE670, (int)&unk_106AE504, 4, (int)off_1061E0AC[0]);
  return 1;
}

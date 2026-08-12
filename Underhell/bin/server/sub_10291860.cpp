int sub_10291860()
{
  if ( (dword_106DA3F8 & 1) == 0 )
  {
    dword_106DA3F8 |= 1u;
    sub_10122040((int)&unk_106DA230, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106DA27C,
      (int)"baseclass",
      0,
      (int)off_1065A4D0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106DA2C8, (int)"m_vecOrigin", 12, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121FA0((int)&unk_106DA314, (int)"m_angRotation", 32, 12, 10, 0, (int)sub_10121A30);
    sub_10121D30((int)&unk_106DA360, (int)"m_flDistance", 28, 4, 10, 16, 0.0, 1024.0, (int)sub_10121A20);
    sub_10122040((int)&unk_106DA3AC, (int)"m_nIndex", 24, 4, 9, 1, 0);
    atexit(sub_10476320);
  }
  sub_10121D00(byte_106DA410, (int)&unk_106DA27C, 5, (int)off_1065CB84);
  return 1;
}

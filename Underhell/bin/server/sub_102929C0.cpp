int sub_102929C0()
{
  if ( (dword_106DAE08 & 1) == 0 )
  {
    dword_106DAE08 |= 1u;
    sub_10122040((int)&unk_106DABA8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106DABF4,
      (int)"baseclass",
      0,
      (int)off_1065A4D0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106DAC40, (int)"m_vecOrigin", 12, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106DAC8C, (int)"m_vecDirection", 24, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106DACD8, (int)"m_nModelIndex", 36, 4, 11, 0, 0);
    sub_10121D30((int)&unk_106DAD24, (int)"m_fNoise", 44, 4, 8, 8, 0.0, 2.5599999, (int)sub_10121A20);
    sub_10122040((int)&unk_106DAD70, (int)"m_nSpeed", 40, 4, 8, 1, 0);
    sub_10122040((int)&unk_106DADBC, (int)"m_nCount", 48, 4, 8, 1, 0);
    atexit(sub_104764B0);
  }
  sub_10121D00(byte_106DAE20, (int)&unk_106DABF4, 7, (int)off_1065CC30);
  return 1;
}

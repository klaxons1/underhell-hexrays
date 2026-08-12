int sub_1028D0A0()
{
  if ( (dword_106D7478 & 1) == 0 )
  {
    dword_106D7478 |= 1u;
    sub_10122040((int)&unk_106D7218, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D7264,
      (int)"baseclass",
      0,
      (int)off_1065A4D0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106D72B0, (int)"m_vecMins", 12, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106D72FC, (int)"m_vecMaxs", 24, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106D7348, (int)"m_nModelIndex", 40, 4, 11, 0, 0);
    sub_10121D30((int)&unk_106D7394, (int)"m_fHeight", 36, 4, 17, 0, -16384.0, 16384.0, (int)sub_10121A20);
    sub_10122040((int)&unk_106D73E0, (int)"m_nCount", 44, 4, 8, 1, 0);
    sub_10121D30((int)&unk_106D742C, (int)"m_fSpeed", 48, 4, 17, 0, -16384.0, 16384.0, (int)sub_10121A20);
    atexit(sub_10475D10);
  }
  sub_10121D00(byte_106D7490, (int)&unk_106D7264, 7, (int)off_1065C898);
  return 1;
}

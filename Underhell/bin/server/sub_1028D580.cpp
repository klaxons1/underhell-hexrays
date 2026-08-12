int sub_1028D580()
{
  if ( (dword_106D7740 & 1) == 0 )
  {
    dword_106D7740 |= 1u;
    sub_10122040((int)&unk_106D74E0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D752C,
      (int)"baseclass",
      0,
      (int)off_1065A4D0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106D7578, (int)"m_vecMins", 12, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106D75C4, (int)"m_vecMaxs", 24, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106D7610, (int)"m_nModelIndex", 40, 4, 11, 0, 0);
    sub_10121D30((int)&unk_106D765C, (int)"m_flWaterZ", 36, 4, 17, 0, -16384.0, 16384.0, (int)sub_10121A20);
    sub_10122040((int)&unk_106D76A8, (int)"m_nCount", 44, 4, 8, 1, 0);
    sub_10121D30((int)&unk_106D76F4, (int)"m_fSpeed", 48, 4, 17, 0, -16384.0, 16384.0, (int)sub_10121A20);
    atexit(sub_10475D60);
  }
  sub_10121D00(byte_106D7758, (int)&unk_106D752C, 7, (int)off_1065C8C0);
  return 1;
}

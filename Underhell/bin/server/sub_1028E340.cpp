int sub_1028E340()
{
  if ( (dword_106D7F90 & 1) == 0 )
  {
    dword_106D7F90 |= 1u;
    sub_10122040((int)&unk_106D7C98, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D7CE4,
      (int)"baseclass",
      0,
      (int)off_1065A4D0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106D7D30, (int)"m_vecOrigin", 12, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106D7D7C, (int)&unk_1053B95C, 28, 4, 8, 1, 0);
    sub_10122040((int)&unk_106D7DC8, (int)&unk_1053B958, 32, 4, 8, 1, 0);
    sub_10122040((int)&unk_106D7E14, (int)&unk_1053B954, 36, 4, 8, 1, 0);
    sub_10122040((int)&unk_106D7E60, (int)"exponent", 40, 4, 8, 0, 0);
    sub_10121D30((int)&unk_106D7EAC, (int)"m_fRadius", 24, 4, 8, 16, 0.0, 2560.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D7EF8, (int)"m_fTime", 44, 4, 8, 8, 0.0, 25.6, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D7F44, (int)"m_fDecay", 48, 4, 8, 8, 0.0, 2560.0, (int)sub_10121A20);
    atexit(sub_10475E50);
  }
  sub_10121D00(byte_106D7FA8, (int)&unk_106D7CE4, 9, (int)off_1065C934);
  return 1;
}

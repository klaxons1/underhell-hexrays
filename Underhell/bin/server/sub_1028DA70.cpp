int sub_1028DA70()
{
  if ( (dword_106D79BC & 1) == 0 )
  {
    dword_106D79BC |= 1u;
    sub_10122040((int)&unk_106D77A8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D77F4,
      (int)"baseclass",
      0,
      (int)off_1065A4D0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106D7840, (int)"m_vecOrigin", 12, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106D788C, (int)"m_vecVelocity", 24, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106D78D8, (int)"m_nModelIndex", 36, 4, 11, 0, 0);
    sub_10122040((int)&unk_106D7924, (int)"m_nLifeTime", 40, 4, 6, 1, 0);
    sub_10234730((int)&unk_106D7970, (int)"m_hOwner", 44, 4, -1, sub_10234830);
    atexit(sub_10475DB0);
  }
  sub_10121D00(byte_106D79D4, (int)&unk_106D77F4, 6, (int)off_1065C8EC);
  return 1;
}

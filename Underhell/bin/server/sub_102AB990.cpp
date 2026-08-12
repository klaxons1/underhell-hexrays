int sub_102AB990()
{
  if ( (dword_106DBA74 & 1) == 0 )
  {
    dword_106DBA74 |= 1u;
    sub_10122040((int)&unk_106DB8F8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106DB944,
      (int)"baseclass",
      0,
      (int)off_1065CB08,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106DB990, (int)"m_vecOrigin", 24, 12, 32, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106DB9DC, (int)"m_vecAngles", 36, 12, 32, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10234700((int)&unk_106DBA28, (int)"m_bBlockedSpawner", 48, 1);
    atexit(sub_10476740);
  }
  sub_10121D00(byte_106DBA8C, (int)&unk_106DB944, 4, (int)off_1065FD6C[0]);
  return 1;
}

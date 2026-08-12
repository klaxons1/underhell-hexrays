int sub_103E3A00()
{
  if ( (dword_106EE188 & 1) == 0 )
  {
    dword_106EE188 |= 1u;
    sub_10122040((int)&unk_106EDFC0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EE00C,
      (int)"baseclass",
      0,
      (int)off_1060D114,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234730((int)&unk_106EE058, (int)"m_hPlayer", 1144, 4, -1, sub_10234830);
    sub_10234700((int)&unk_106EE0A4, (int)"m_bEnterAnimOn", 1129, 1);
    sub_10234700((int)&unk_106EE0F0, (int)"m_bExitAnimOn", 1130, 1);
    sub_10121E50((int)&unk_106EE13C, (int)"m_vecEyeExitEndpoint", 1132, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    atexit(sub_10479280);
  }
  sub_10121D00(byte_106EE2E8, (int)&unk_106EE00C, 5, (int)off_10681934[0]);
  return 1;
}

int sub_103F2F40()
{
  if ( (dword_106EED60 & 1) == 0 )
  {
    dword_106EED60 |= 1u;
    sub_10122040((int)&unk_106EEB98, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EEBE4,
      (int)"baseclass",
      0,
      (int)off_10643010,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234730((int)&unk_106EEC30, (int)"m_hPlayer", 1692, 4, -1, sub_10234830);
    sub_10234700((int)&unk_106EEC7C, (int)"m_bEnterAnimOn", 2113, 1);
    sub_10234700((int)&unk_106EECC8, (int)"m_bExitAnimOn", 2114, 1);
    sub_10121E50((int)&unk_106EED14, (int)"m_vecEyeExitEndpoint", 2116, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    atexit(sub_10479440);
  }
  sub_10121D00(byte_106EED9C, (int)&unk_106EEBE4, 5, (int)off_10684234[0]);
  return 1;
}

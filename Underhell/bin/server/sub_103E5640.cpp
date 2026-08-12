int sub_103E5640()
{
  if ( (dword_106EE514 & 1) == 0 )
  {
    dword_106EE514 |= 1u;
    sub_10122040((int)&unk_106EE300, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EE34C,
      (int)"baseclass",
      0,
      (int)off_1060D114,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234730((int)&unk_106EE398, (int)"m_hPlayer", 1564, 4, -1, sub_10234830);
    sub_10234700((int)&unk_106EE3E4, (int)"m_bMagnetOn", 1568, 1);
    sub_10234700((int)&unk_106EE430, (int)"m_bEnterAnimOn", 1581, 1);
    sub_10234700((int)&unk_106EE47C, (int)"m_bExitAnimOn", 1582, 1);
    sub_10121E50((int)&unk_106EE4C8, (int)"m_vecEyeExitEndpoint", 1584, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    atexit(sub_104792C0);
  }
  sub_10121D00(byte_106EE574, (int)&unk_106EE34C, 6, (int)off_10681E4C);
  return 1;
}

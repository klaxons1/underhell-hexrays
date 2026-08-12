int sub_103EF980()
{
  if ( (dword_106EE9FC & 1) == 0 )
  {
    dword_106EE9FC |= 1u;
    sub_10122040((int)&unk_106EE7E8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EE834,
      (int)"baseclass",
      0,
      (int)off_10682B40,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106EE880, (int)"m_iNumRadarContacts", 2124, 4, 8, 0, 0);
    sub_10121E50((int)&unk_106EE8CC, (int)"m_vecRadarContactPos", 2128, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122270((int)&unk_106EE918, 24, 12, (int)"m_vecRadarContactPos", 0);
    sub_10122040((int)&unk_106EE964, (int)"m_iRadarContactType", 2416, 4, 3, 0, 0);
    sub_10122270((int)&unk_106EE9B0, 24, 4, (int)"m_iRadarContactType", 0);
    atexit(sub_104793D0);
  }
  sub_10121D00(byte_106EEAEC, (int)&unk_106EE834, 6, (int)off_10683630);
  return 1;
}

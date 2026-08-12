int sub_103E0000()
{
  if ( (dword_106EDE04 & 1) == 0 )
  {
    dword_106EDE04 |= 1u;
    sub_10122040((int)&unk_106EDBF0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EDC3C,
      (int)"baseclass",
      0,
      (int)off_10653D5C,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234700((int)&unk_106EDC88, (int)"m_bHeadlightIsOn", 1804, 1);
    sub_10122040((int)&unk_106EDCD4, (int)"m_nAmmoCount", 1800, 4, 9, 0, 0);
    sub_10122040((int)&unk_106EDD20, (int)"m_nExactWaterLevel", 1908, 4, -1, 0, 0);
    sub_10122040((int)&unk_106EDD6C, (int)"m_nWaterLevel", 447, 1, -1, 0, 0);
    sub_10121E50((int)&unk_106EDDB8, (int)"m_vecPhysVelocity", 1896, 12, 32, 4, 0.0, -121121.12, (int)sub_10121AA0);
    atexit(sub_10479200);
  }
  sub_10121D00(byte_106EDFA4, (int)&unk_106EDC3C, 6, (int)off_10681008[0]);
  return 1;
}

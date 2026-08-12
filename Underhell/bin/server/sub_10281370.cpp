int sub_10281370()
{
  if ( (dword_106D22C0 & 1) == 0 )
  {
    dword_106D22C0 |= 1u;
    sub_10122040((int)&unk_106D1F30, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D1F7C,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106D1FC8, (int)"m_flWaveHeight", 804, 4, 8, 16, 0.0, 8.0, (int)sub_10121A20);
    sub_10121E50((int)&unk_106D2014, (int)"m_WorldMins", 808, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106D2060, (int)"m_WorldMaxs", 820, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106D20AC, (int)"m_bStartDark", 852, 1, 1, 1, 0);
    sub_10121D30((int)&unk_106D20F8, (int)"m_flMaxOccludeeArea", 832, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D2144, (int)"m_flMinOccluderArea", 836, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30(
      (int)&unk_106D2190,
      (int)"m_flMaxPropScreenSpaceWidth",
      844,
      4,
      0,
      4,
      0.0,
      -121121.12,
      (int)sub_10121A20);
    sub_10121D30(
      (int)&unk_106D21DC,
      (int)"m_flMinPropScreenSpaceWidth",
      840,
      4,
      0,
      4,
      0.0,
      -121121.12,
      (int)sub_10121A20);
    sub_102348B0((int)&unk_106D2228, (int)"m_iszDetailSpriteMaterial", 848);
    sub_10122040((int)&unk_106D2274, (int)"m_bColdWorld", 853, 1, 1, 1, 0);
    atexit(sub_10475490);
  }
  sub_10121D00(byte_106D1F14, (int)&unk_106D1F7C, 11, (int)off_10659F60);
  return 1;
}

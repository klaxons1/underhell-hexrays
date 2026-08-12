int sub_1014EDE0()
{
  if ( (dword_106B2460 & 1) == 0 )
  {
    dword_106B2460 |= 1u;
    sub_10122040((int)&unk_106B2298, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106B22E4,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50(
      (int)&unk_106B2330,
      (int)"m_vecPlayerMountPositionTop",
      832,
      12,
      2,
      4,
      0.0,
      -121121.12,
      (int)sub_10121AA0);
    sub_10121E50(
      (int)&unk_106B237C,
      (int)"m_vecPlayerMountPositionBottom",
      844,
      12,
      2,
      4,
      0.0,
      -121121.12,
      (int)sub_10121AA0);
    sub_10121E50((int)&unk_106B23C8, (int)"m_vecLadderDir", 800, 12, 2, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10234700(&unk_106B2414, "m_bFakeLadder", 857, 1);
    atexit(sub_104714F0);
  }
  sub_10121D00(byte_106B24F8, (int)&unk_106B22E4, 5, (int)off_106268CC);
  return 1;
}

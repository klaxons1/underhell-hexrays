int sub_10111430()
{
  if ( (dword_1069B3A4 & 1) == 0 )
  {
    dword_1069B3A4 |= 1u;
    sub_10122040(&unk_1069B0F8, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_10121E50((int)&unk_1069B144, (int)"m_vecMins", 8, 12, 0, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_1069B190, (int)"m_vecMaxs", 20, 12, 0, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040(&unk_1069B1DC, "m_nSolidType", 41, 1, 3, 1, sub_10110F30);
    sub_10122040(&unk_1069B228, "m_usSolidFlags", 36, 2, 10, 1, sub_10110F50);
    sub_10122040(&unk_1069B274, "m_nSurroundType", 40, 1, 3, 1, 0);
    sub_10122040(&unk_1069B2C0, "m_triggerBloat", 42, 1, 0, 1, 0);
    sub_10121E50(
      (int)&unk_1069B30C,
      (int)"m_vecSpecifiedSurroundingMins",
      44,
      12,
      0,
      4,
      0.0,
      -121121.12,
      (int)sub_10121AA0);
    sub_10121E50(
      (int)&unk_1069B358,
      (int)"m_vecSpecifiedSurroundingMaxs",
      56,
      12,
      0,
      4,
      0.0,
      -121121.12,
      (int)sub_10121AA0);
    atexit(sub_104705E0);
  }
  sub_10121D00(&unk_1069B144, 8, off_106153F0[0]);
  return 1;
}

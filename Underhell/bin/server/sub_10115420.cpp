int sub_10115420()
{
  if ( (dword_1069B714 & 1) == 0 )
  {
    dword_1069B714 |= 1u;
    sub_10122040(&unk_1069B500, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_10121E50((int)&unk_1069B54C, (int)"m_vecOrigin", 716, 12, -1, 4, 0.0, -121121.12, (int)sub_100D9930);
    sub_10121D30((int)&unk_1069B598, (int)"m_MinFalloff", 832, 4, 32, 0, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_1069B5E4, (int)"m_MaxFalloff", 836, 4, 32, 0, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_1069B630, (int)"m_flCurWeight", 840, 4, 32, 0, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122120(&unk_1069B67C, "m_netlookupFilename", 844, 260, 0, sub_10121B10);
    sub_10234700(&unk_1069B6C8, "m_bEnabled", 829, 1);
    atexit(sub_10470630);
  }
  sub_10121D00(&unk_1069B54C, 6, off_1061573C[0]);
  return 1;
}

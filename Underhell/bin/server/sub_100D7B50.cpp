int sub_100D7B50()
{
  if ( (dword_1069794C & 1) == 0 )
  {
    dword_1069794C |= 1u;
    sub_10122040(&unk_10697868, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_10234800(&unk_106978B4, "m_PredictableID", 136, 4);
    sub_10122040(&unk_10697900, "m_bIsPlayerSimulated", 756, 1, 1, 1, 0);
    atexit(sub_1046FBC0);
  }
  sub_10121D00(&unk_106978B4, 2, off_1060F47C[0]);
  return 1;
}

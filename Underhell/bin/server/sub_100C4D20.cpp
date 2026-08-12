int sub_100C4D20()
{
  if ( (dword_106965A0 & 1) == 0 )
  {
    dword_106965A0 |= 1u;
    sub_10122040(&unk_106963D8, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_10122040(&unk_10696424, "m_nSequence", 8, 4, 12, 1, 0);
    sub_10121D30((int)&unk_10696470, (int)"m_flCycle", 12, 4, 15, 8, 0.0, 1.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106964BC, (int)"m_flPrevCycle", 16, 4, 15, 8, 0.0, 1.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_10696508, (int)"m_flWeight", 20, 4, 8, 0, 0.0, 1.0, (int)sub_10121A20);
    sub_10122040(&unk_10696554, "m_nOrder", 60, 4, 4, 1, 0);
    atexit(sub_1046F950);
  }
  sub_10121D00(&unk_10696424, 5, off_1060DBA8);
  return 1;
}

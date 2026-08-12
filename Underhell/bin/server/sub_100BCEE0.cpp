int sub_100BCEE0()
{
  if ( (dword_106957C0 & 1) == 0 )
  {
    dword_106957C0 |= 1u;
    sub_10122040(&unk_10695728, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_10121D30((int)&unk_10695774, (int)"m_flCycle", 904, 4, 15, 1032, 0.0, 1.0, (int)sub_10121A20);
    atexit(sub_1046F7C0);
  }
  sub_10121D00(&unk_10695774, 1, off_1060D1AC[0]);
  return 1;
}

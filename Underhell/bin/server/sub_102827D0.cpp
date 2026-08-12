int sub_102827D0()
{
  if ( (dword_106D256C & 1) == 0 )
  {
    dword_106D256C |= 1u;
    sub_10122040((int)&unk_106D2488, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10121E50((int)&unk_106D24D4, (int)"m_vOrigin", 800, 12, 0, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106D2520, (int)"m_vDirection", 812, 12, 0, 4, 0.0, -121121.12, (int)sub_10121AA0);
    atexit(sub_10475540);
  }
  sub_10121D00(byte_106D25A4, (int)&unk_106D24D4, 2, (int)off_1065A5E0[0]);
  return 1;
}

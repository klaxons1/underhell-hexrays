int sub_1028B8C0()
{
  if ( (dword_106D64A8 & 1) == 0 )
  {
    dword_106D64A8 |= 1u;
    sub_10122040((int)&unk_106D6378, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10122040((int)&unk_106D63C4, (int)"m_nPoints", 204, 4, 5, 1, 0);
    sub_10121E50((int)&unk_106D6410, (int)"m_vecPoints", 12, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122270((int)&unk_106D645C, 16, 12, (int)"m_vecPoints", 0);
    atexit(sub_10475B80);
  }
  sub_10121D00(byte_106D64C4, (int)&unk_106D63C4, 3, (int)off_1065C7DC);
  return 1;
}

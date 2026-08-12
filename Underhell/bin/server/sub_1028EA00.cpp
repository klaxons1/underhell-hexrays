int sub_1028EA00()
{
  if ( (dword_106D82B0 & 1) == 0 )
  {
    dword_106D82B0 |= 1u;
    sub_10122040((int)&unk_106D8180, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10121E50((int)&unk_106D81CC, (int)"m_vecPos", 12, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106D8218, (int)"m_vecDir", 24, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106D8264, (int)"m_bExplosive", 36, 1, 1, 1, 0);
    atexit(sub_10475EF0);
  }
  sub_10121D00(byte_106D82C8, (int)&unk_106D81CC, 3, (int)off_1065C984);
  return 1;
}

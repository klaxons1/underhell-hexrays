int sub_10289700()
{
  if ( (dword_106D5114 & 1) == 0 )
  {
    dword_106D5114 |= 1u;
    sub_10122040((int)&unk_106D5030, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10121E50((int)&unk_106D507C, (int)"m_vecPos", 12, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106D50C8, (int)"m_vecDir", 24, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    atexit(sub_104758D0);
  }
  sub_10121D00(byte_106D512C, (int)&unk_106D507C, 2, (int)off_1065C670[0]);
  return 1;
}

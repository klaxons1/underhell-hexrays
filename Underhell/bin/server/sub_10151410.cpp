int sub_10151410()
{
  if ( (dword_106B2784 & 1) == 0 )
  {
    dword_106B2784 |= 1u;
    sub_10122040((int)&unk_106B26A0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10234700(&unk_106B26EC, "m_bActive", 800, 1);
    sub_10122040((int)&unk_106B2738, (int)"m_nOccluderIndex", 804, 4, 10, 1, 0);
    atexit(sub_10471590);
  }
  sub_10121D00(byte_106B27BC, (int)&unk_106B26EC, 2, (int)off_10627014[0]);
  return 1;
}

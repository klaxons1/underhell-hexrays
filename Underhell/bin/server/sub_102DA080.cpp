int sub_102DA080()
{
  if ( (dword_106E0420 & 1) == 0 )
  {
    dword_106E0420 |= 1u;
    sub_10122040((int)&unk_106E0388, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10234700((int)&unk_106E03D4, (int)"m_bMegaPhysgun", 12, 1);
    atexit(sub_10477240);
  }
  sub_10121D00(byte_106DEA70, (int)&unk_106E03D4, 1, (int)off_10665D64[0]);
  return 1;
}

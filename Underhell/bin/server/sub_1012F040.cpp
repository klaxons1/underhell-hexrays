int sub_1012F040()
{
  if ( (dword_106AE9AC & 1) == 0 )
  {
    dword_106AE9AC |= 1u;
    sub_10122040((int)&unk_106AE8C8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10121D30((int)&unk_106AE914, (int)"m_flFadeStartDist", 800, 4, 32, 0, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106AE960, (int)"m_flFadeEndDist", 804, 4, 32, 0, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_10470D10);
  }
  sub_10121D00(byte_106AE8B0, (int)&unk_106AE914, 2, (int)off_1061E39C);
  return 1;
}

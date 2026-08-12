int sub_10235A40()
{
  if ( (dword_106C49AC & 1) == 0 )
  {
    dword_106C49AC |= 1u;
    sub_10122040((int)&unk_106C4830, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10121E50((int)&unk_106C487C, (int)"m_shadowDirection", 800, 12, -1, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106C48C8, (int)"m_shadowColor", 812, 4, 32, 1, 0);
    sub_10121D30((int)&unk_106C4914, (int)"m_flShadowMaxDist", 816, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10234700((int)&unk_106C4960, (int)"m_bDisableShadows", 820, 1);
    atexit(sub_10473EA0);
  }
  sub_10121D00(byte_106C49E8, (int)&unk_106C487C, 4, (int)off_1064A764[0]);
  return 1;
}

int sub_101787A0()
{
  if ( (dword_106B6294 & 1) == 0 )
  {
    dword_106B6294 |= 1u;
    sub_10122040((int)&unk_106B5EB8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10122040((int)&unk_106B5F04, (int)"m_clrRender", 116, 4, 32, 1, sub_102346A0);
    sub_10122040((int)&unk_106B5F50, (int)"m_nHorizontalSize", 800, 4, 16, 1, 0);
    sub_10122040((int)&unk_106B5F9C, (int)"m_nVerticalSize", 804, 4, 16, 1, 0);
    sub_10122040((int)&unk_106B5FE8, (int)"m_nMinDist", 808, 4, 16, 1, 0);
    sub_10122040((int)&unk_106B6034, (int)"m_nMaxDist", 812, 4, 16, 1, 0);
    sub_10122040((int)&unk_106B6080, (int)"m_nOuterMaxDist", 816, 4, 16, 1, 0);
    sub_10122040((int)&unk_106B60CC, (int)"m_spawnflags", 248, 4, 8, 1, 0);
    sub_10121E50((int)&unk_106B6118, (int)"m_vecOrigin", 716, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121FA0((int)&unk_106B6164, (int)"m_angRotation", 728, 12, 13, 0, (int)sub_100D99A0);
    sub_10234730(&unk_106B61B0, "moveparent", 308, 4, -1, sub_10234830);
    sub_10121D30((int)&unk_106B61FC, (int)"m_flGlowProxySize", 820, 4, 6, 16, 0.0, 64.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106B6248, (int)"HDRColorScale", 824, 4, 0, 4, 0.0, 100.0, (int)sub_10121A20);
    atexit(sub_10471EA0);
  }
  sub_10121D00(byte_106B62CC, (int)&unk_106B5F04, 12, (int)off_1062BE08[0]);
  return 1;
}

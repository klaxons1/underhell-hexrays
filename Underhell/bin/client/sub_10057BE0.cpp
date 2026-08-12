int sub_10057BE0()
{
  if ( (dword_1040C5E4 & 1) == 0 )
  {
    dword_1040C5E4 |= 1u;
    sub_1009AED0(&unk_1040C2D8, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AED0(&unk_1040C314, "m_clrRender", 88, 4, 0, sub_10115FD0);
    sub_1009AED0(&unk_1040C350, "m_nHorizontalSize", 1192, 4, 0, 0);
    sub_1009AED0(&unk_1040C38C, "m_nVerticalSize", 1196, 4, 0, 0);
    sub_1009AED0(&unk_1040C3C8, "m_nMinDist", 1200, 4, 0, 0);
    sub_1009AED0(&unk_1040C404, "m_nMaxDist", 1204, 4, 0, 0);
    sub_1009AED0(&unk_1040C440, "m_nOuterMaxDist", 1208, 4, 0, 0);
    sub_1009AED0(&unk_1040C47C, "m_spawnflags", 1212, 4, 0, 0);
    sub_1009AC90(&unk_1040C4B8, "m_vecOrigin", 708, 12, 0, sub_1009ADD0);
    sub_1009AC90(&unk_1040C4F4, "m_angRotation", 720, 12, 0, sub_1009ADD0);
    sub_1009AED0(&unk_1040C530, "moveparent", 340, 4, 0, sub_10116120);
    sub_1009AC40(&unk_1040C56C, "m_flGlowProxySize", 1420, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040C5A8, "HDRColorScale", 0, -1, 0, sub_10057BB0);
  }
  sub_1009AC10(&unk_1040C314, 12, "DT_LightGlow");
  return 1;
}

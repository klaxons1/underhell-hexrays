int sub_1006C9E0()
{
  if ( (dword_104117A8 & 1) == 0 )
  {
    dword_104117A8 |= 1u;
    sub_1009AED0(&unk_10411550, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AED0(&unk_1041158C, "m_clrRender", 88, 4, 0, sub_10115FD0);
    sub_1009AED0(&unk_104115C8, "m_clrOverlay", 1528, 4, 0, sub_10115FD0);
    sub_1009AC90(&unk_10411604, "m_vDirection", 1540, 12, 0, sub_1009ADD0);
    sub_1009AED0(&unk_10411640, "m_bOn", 1552, 1, 0, 0);
    sub_1009AED0(&unk_1041167C, "m_nSize", 1532, 4, 0, 0);
    sub_1009AED0(&unk_104116B8, "m_nOverlaySize", 1536, 4, 0, 0);
    sub_1009AED0(&unk_104116F4, "m_nMaterial", 1556, 4, 0, 0);
    sub_1009AED0(&unk_10411730, "m_nOverlayMaterial", 1560, 4, 0, 0);
    sub_1009AC40(&unk_1041176C, "HDRColorScale", 0, -1, 0, sub_1006C9B0);
  }
  sub_1009AC10(&unk_1041158C, 9, "DT_Sun");
  return 1;
}

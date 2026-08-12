int sub_10246F10()
{
  if ( (dword_106C6010 & 1) == 0 )
  {
    dword_106C6010 |= 1u;
    sub_10122040((int)&unk_106C5D18, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10122040((int)&unk_106C5D64, (int)"m_clrRender", 116, 4, 32, 1, sub_102346A0);
    sub_10122040((int)&unk_106C5DB0, (int)"m_clrOverlay", 840, 4, 32, 1, sub_102346A0);
    sub_10121E50((int)&unk_106C5DFC, (int)"m_vDirection", 800, 12, 0, 32, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106C5E48, (int)"m_bOn", 844, 1, 1, 1, 0);
    sub_10122040((int)&unk_106C5E94, (int)"m_nSize", 832, 4, 10, 1, 0);
    sub_10122040((int)&unk_106C5EE0, (int)"m_nOverlaySize", 836, 4, 10, 1, 0);
    sub_10122040((int)&unk_106C5F2C, (int)"m_nMaterial", 848, 4, 32, 1, 0);
    sub_10122040((int)&unk_106C5F78, (int)"m_nOverlayMaterial", 852, 4, 32, 1, 0);
    sub_10121D30((int)&unk_106C5FC4, (int)"HDRColorScale", 856, 4, 0, 4, 0.0, 100.0, (int)sub_10121A20);
    atexit(sub_104742C0);
  }
  sub_10121D00(byte_106C6048, (int)&unk_106C5D64, 9, (int)off_1064E970[0]);
  return 1;
}

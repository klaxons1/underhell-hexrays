int sub_101FD530()
{
  if ( (dword_106C1364 & 1) == 0 )
  {
    dword_106C1364 |= 1u;
    sub_10122040((int)&unk_106C0F88, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106C0FD4,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106C1020, (int)"m_FOV", 808, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106C106C, (int)"m_Resolution", 812, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106C10B8, (int)"m_bFogEnable", 816, 1, 1, 1, 0);
    sub_10122040((int)&unk_106C1104, (int)"m_FogColor", 817, 4, 32, 1, 0);
    sub_10121D30((int)&unk_106C1150, (int)"m_flFogStart", 824, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106C119C, (int)"m_flFogEnd", 828, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106C11E8, (int)"m_flFogMaxDensity", 832, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106C1234, (int)"m_bActive", 836, 1, 1, 1, 0);
    sub_10122040((int)&unk_106C1280, (int)"m_bCustomTexture", 844, 1, 1, 1, 0);
    sub_10122040((int)&unk_106C12CC, (int)"m_bUseScreenAspectRatio", 837, 1, 1, 1, 0);
    sub_10122040((int)&unk_106C1318, (int)"m_iRenderTargetindex", 840, 4, 4, 1, 0);
    atexit(sub_10473750);
  }
  sub_10121D00(byte_106C13A8, (int)&unk_106C0FD4, 12, (int)off_1063FFBC);
  return 1;
}

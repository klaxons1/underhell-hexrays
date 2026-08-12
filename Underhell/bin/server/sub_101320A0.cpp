int sub_101320A0()
{
  if ( (dword_106AF5F0 & 1) == 0 )
  {
    dword_106AF5F0 |= 1u;
    sub_10122040((int)&unk_106AF130, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106AF17C,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234730(&unk_106AF1C8, "m_hTargetEntity", 800, 4, -1, sub_10234830);
    sub_10234700(&unk_106AF214, "m_bState", 817, 1);
    sub_10121D30((int)&unk_106AF260, (int)"m_flLightFOV", 812, 4, 32, 0, 0.0, -121121.12, (int)sub_10121A20);
    sub_10234700(&unk_106AF2AC, "m_bEnableShadows", 816, 1);
    sub_10234700(&unk_106AF2F8, "m_bLightOnlyTarget", 818, 1);
    sub_10234700(&unk_106AF344, "m_bLightWorld", 819, 1);
    sub_10234700(&unk_106AF390, "m_bCameraSpace", 820, 1);
    sub_10121E50((int)&unk_106AF3DC, (int)"m_LinearFloatLightColor", 824, 12, 32, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121D30((int)&unk_106AF428, (int)"m_flAmbient", 836, 4, 32, 0, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122120((int)&unk_106AF474, (int)"m_SpotlightTextureName", 840, 260, 0, (int)sub_10121B10);
    sub_10122040((int)&unk_106AF4C0, (int)"m_nSpotlightTextureFrame", 1100, 4, -1, 0, 0);
    sub_10121D30((int)&unk_106AF50C, (int)"m_flNearZ", 804, 4, 16, 8, 0.0, 500.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106AF558, (int)"m_flFarZ", 808, 4, 18, 8, 0.0, 1500.0, (int)sub_10121A20);
    sub_10122040((int)&unk_106AF5A4, (int)"m_nShadowQuality", 1104, 4, 1, 1, 0);
    atexit(sub_10470DD0);
  }
  sub_10121D00(byte_106AF62C, (int)&unk_106AF17C, 15, (int)off_1061EC38);
  return 1;
}

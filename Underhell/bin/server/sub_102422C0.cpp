int sub_102422C0()
{
  if ( (dword_106C5A4C & 1) == 0 )
  {
    dword_106C5A4C |= 1u;
    sub_10122040((int)&unk_106C5670, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106C56BC,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234730((int)&unk_106C5708, (int)"m_hAttachedToEntity", 800, 4, -1, sub_10234830);
    sub_10122040((int)&unk_106C5754, (int)"m_nAttachment", 804, 4, 8, 0, 0);
    sub_10121D30((int)&unk_106C57A0, (int)"m_flScaleTime", 832, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106C57EC, (int)"m_flSpriteScale", 828, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106C5838, (int)"m_flGlowProxySize", 840, 4, 6, 16, 0.0, 64.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106C5884, (int)"m_flHDRColorScale", 844, 4, 0, 4, 0.0, 100.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106C58D0, (int)"m_flSpriteFramerate", 808, 4, 8, 16, 0.0, 60.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106C591C, (int)"m_flFrame", 812, 4, 20, 8, 0.0, 256.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106C5968, (int)"m_flBrightnessTime", 824, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106C59B4, (int)"m_nBrightness", 820, 4, 8, 1, 0);
    sub_10234700((int)&unk_106C5A00, (int)"m_bWorldSpaceScale", 836, 1);
    atexit(sub_10474210);
  }
  sub_10121D00(byte_106C5A88, (int)&unk_106C56BC, 12, (int)off_1064DBB4[0]);
  return 1;
}

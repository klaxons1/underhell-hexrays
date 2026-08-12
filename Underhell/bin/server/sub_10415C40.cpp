int sub_10415C40()
{
  if ( (dword_106F168C & 1) == 0 )
  {
    dword_106F168C |= 1u;
    sub_10122040((int)&unk_106F13E0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106F142C,
      (int)"baseclass",
      0,
      (int)off_1060E0C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106F1478, (int)"m_flTimeBurnOut", 2112, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106F14C4, (int)"m_flScale", 2116, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106F1510, (int)"m_bLight", 2133, 1, 1, 1, 0);
    sub_10122040((int)&unk_106F155C, (int)"m_bSmoke", 2134, 1, 1, 1, 0);
    sub_10122040((int)&unk_106F15A8, (int)"m_bPropFlare", 2135, 1, 1, 1, 0);
    sub_10122040((int)&unk_106F15F4, (int)"m_bGlowStick", 2136, 1, 1, 1, 0);
    sub_10122040((int)&unk_106F1640, (int)"m_nSkinNumber", 2140, 4, 0, 1, 0);
    atexit(sub_10479D50);
  }
  sub_10121D00(byte_106F13C4, (int)&unk_106F142C, 8, (int)off_1068904C);
  return 1;
}

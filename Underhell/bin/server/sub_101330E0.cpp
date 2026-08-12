int sub_101330E0()
{
  if ( (dword_106AFA4C & 1) == 0 )
  {
    dword_106AFA4C |= 1u;
    sub_10122040((int)&unk_106AF7A0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106AF7EC,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122120((int)&unk_106AF838, (int)"m_iszOverlayNames", 800, 4, 0, (int)sub_10234890);
    sub_10122270((int)&unk_106AF884, 10, 4, (int)"m_iszOverlayNames", 0);
    sub_10121D30((int)&unk_106AF8D0, (int)"m_flOverlayTimes", 840, 4, 11, 8, -1.0, 63.0, (int)sub_10121A20);
    sub_10122270((int)&unk_106AF91C, 10, 4, (int)"m_flOverlayTimes", 0);
    sub_10121D30((int)&unk_106AF968, (int)"m_flStartTime", 880, 4, 32, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106AF9B4, (int)"m_iDesiredOverlay", 884, 4, 5, 0, 0);
    sub_10234700(&unk_106AFA00, "m_bIsActive", 888, 1);
    atexit(sub_10470E40);
  }
  sub_10121D00(byte_106AFAA8, (int)&unk_106AF7EC, 8, (int)off_1061F254[0]);
  return 1;
}

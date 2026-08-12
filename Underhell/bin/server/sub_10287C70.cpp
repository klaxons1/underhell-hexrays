int sub_10287C70()
{
  if ( (dword_106D4F3C & 1) == 0 )
  {
    dword_106D4F3C |= 1u;
    sub_10122040((int)&unk_106D4B60, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D4BAC,
      (int)"baseclass",
      0,
      (int)off_10612678,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106D4BF8, (int)"m_SpreadSpeed", 800, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D4C44, (int)"m_Speed", 804, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D4C90, (int)"m_StartSize", 808, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D4CDC, (int)"m_EndSize", 812, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D4D28, (int)"m_Rate", 816, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D4D74, (int)"m_JetLength", 820, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106D4DC0, (int)"m_bEmit", 824, 4, 1, 1, 0);
    sub_10122040((int)&unk_106D4E0C, (int)"m_bFaceLeft", 828, 1, 1, 1, 0);
    sub_10122040((int)&unk_106D4E58, (int)"m_nType", 832, 4, 32, 1, 0);
    sub_10122040((int)&unk_106D4EA4, (int)"m_spawnflags", 248, 4, 8, 1, 0);
    sub_10121D30((int)&unk_106D4EF0, (int)"m_flRollSpeed", 836, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_10475810);
  }
  sub_10121D00(byte_106D4F74, (int)&unk_106D4BAC, 12, (int)off_1065C2DC);
  return 1;
}

int sub_1028F8D0()
{
  if ( (dword_106D9150 & 1) == 0 )
  {
    dword_106D9150 |= 1u;
    sub_10122040((int)&unk_106D8C90, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D8CDC,
      (int)"baseclass",
      0,
      (int)off_1065A4D0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106D8D28, (int)"m_vecOrigin", 12, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106D8D74, (int)"m_vecAngles", 24, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106D8DC0, (int)"m_vecForce", 36, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106D8E0C, (int)"m_vecForcePos", 48, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121D30((int)&unk_106D8E58, (int)"m_flWidth", 60, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D8EA4, (int)"m_flHeight", 64, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D8EF0, (int)"m_flShardSize", 68, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106D8F3C, (int)"m_nSurfaceType", 72, 4, 2, 1, 0);
    sub_10122040((int)&unk_106D8F88, (int)"m_uchFrontColor[0]", 76, 1, 8, 1, 0);
    sub_10122040((int)&unk_106D8FD4, (int)"m_uchFrontColor[1]", 77, 1, 8, 1, 0);
    sub_10122040((int)&unk_106D9020, (int)"m_uchFrontColor[2]", 78, 1, 8, 1, 0);
    sub_10122040((int)&unk_106D906C, (int)"m_uchBackColor[0]", 79, 1, 8, 1, 0);
    sub_10122040((int)&unk_106D90B8, (int)"m_uchBackColor[1]", 80, 1, 8, 1, 0);
    sub_10122040((int)&unk_106D9104, (int)"m_uchBackColor[2]", 81, 1, 8, 1, 0);
    atexit(sub_10476070);
  }
  sub_10121D00(byte_106D916C, (int)&unk_106D8CDC, 15, (int)off_1065CA20[0]);
  return 1;
}

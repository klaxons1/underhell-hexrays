int sub_10282970()
{
  if ( (dword_106D2788 & 1) == 0 )
  {
    dword_106D2788 |= 1u;
    sub_10122040((int)&unk_106D25C0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D260C,
      (int)"baseclass",
      0,
      (int)off_10612678,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234790((int)&unk_106D2658, (int)"m_flSpawnTime", 804, 4);
    sub_10121D30((int)&unk_106D26A4, (int)"m_FadeStartTime", 808, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D26F0, (int)"m_FadeEndTime", 812, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106D273C, (int)"m_CurrentStage", 800, 1, 1, 1, 0);
    atexit(sub_10475580);
  }
  sub_10121D00(byte_106D27C0, (int)&unk_106D260C, 5, (int)off_1065A6F4[0]);
  return 1;
}

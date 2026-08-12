int sub_10124E20()
{
  if ( (dword_1069D4CC & 1) == 0 )
  {
    dword_1069D4CC |= 1u;
    sub_10122040((int)&unk_1069D0F0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10122040((int)&unk_1069D13C, (int)"m_iMinWind", 12, 4, 10, 1, 0);
    sub_10122040((int)&unk_1069D188, (int)"m_iMaxWind", 16, 4, 10, 1, 0);
    sub_10122040((int)&unk_1069D1D4, (int)"m_iMinGust", 20, 4, 10, 1, 0);
    sub_10122040((int)&unk_1069D220, (int)"m_iMaxGust", 24, 4, 10, 1, 0);
    sub_10121D30((int)&unk_1069D26C, (int)"m_flMinGustDelay", 28, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_1069D2B8, (int)"m_flMaxGustDelay", 32, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_1069D304, (int)"m_iGustDirChange", 40, 4, 9, 1, 0);
    sub_10122040((int)&unk_1069D350, (int)"m_iWindSeed", 8, 4, 32, 1, 0);
    sub_10122040((int)&unk_1069D39C, (int)"m_iInitialWindDir", 56, 4, 9, 1, 0);
    sub_10121D30((int)&unk_1069D3E8, (int)"m_flInitialWindSpeed", 60, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_1069D434, (int)"m_flStartTime", 4, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_1069D480, (int)"m_flGustDuration", 36, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_104708F0);
  }
  sub_10121D00(byte_1069DD88, (int)&unk_1069D13C, 12, (int)off_10619A94[0]);
  return 1;
}

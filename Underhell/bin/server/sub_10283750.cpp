int sub_10283750()
{
  if ( (dword_106D3254 & 1) == 0 )
  {
    dword_106D3254 |= 1u;
    sub_10122040((int)&unk_106D2FA8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D2FF4,
      (int)"baseclass",
      0,
      (int)off_10612678,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106D3040, (int)"m_flSpawnRate", 812, 4, 8, 0, 1.0, 1024.0, (int)sub_10121A20);
    sub_10121E50((int)&unk_106D308C, (int)"m_vecEndColor", 800, 12, 8, 0, 0.0, 1.0, (int)sub_10121AA0);
    sub_10121D30((int)&unk_106D30D8, (int)"m_flParticleLifetime", 816, 4, 16, 16, 0.1, 100.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D3124, (int)"m_flStartSize", 820, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D3170, (int)"m_flEndSize", 824, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D31BC, (int)"m_flSpawnRadius", 828, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10234700((int)&unk_106D3208, (int)"m_bEmit", 832, 1);
    atexit(sub_10475640);
  }
  sub_10121D00(byte_106D40FC, (int)&unk_106D2FF4, 8, (int)off_1065AACC[0]);
  return 1;
}

int sub_10283BA0()
{
  if ( (dword_106D3AB4 & 1) == 0 )
  {
    dword_106D3AB4 |= 1u;
    sub_10122040((int)&unk_106D3640, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D368C,
      (int)"baseclass",
      0,
      (int)off_10612678,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106D36D8, (int)"m_SpawnRate", 816, 4, 8, 0, 1.0, 1024.0, (int)sub_10121A20);
    sub_10121E50((int)&unk_106D3724, (int)"m_Color", 800, 12, 8, 0, 0.0, 1.0, (int)sub_10121AA0);
    sub_10121D30((int)&unk_106D3770, (int)"m_ParticleLifetime", 820, 4, 16, 16, 0.1, 100.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D37BC, (int)"m_StopEmitTime", 824, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D3808, (int)"m_MinSpeed", 828, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D3854, (int)"m_MaxSpeed", 832, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D38A0, (int)"m_MinDirectedSpeed", 848, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D38EC, (int)"m_MaxDirectedSpeed", 852, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D3938, (int)"m_StartSize", 836, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D3984, (int)"m_EndSize", 840, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D39D0, (int)"m_SpawnRadius", 844, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10234700((int)&unk_106D3A1C, (int)"m_bEmit", 856, 1);
    sub_10121D30((int)&unk_106D3A68, (int)"m_Opacity", 812, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_104756D0);
  }
  sub_10121D00(byte_106D418C, (int)&unk_106D368C, 14, (int)off_1065AAD8[0]);
  return 1;
}

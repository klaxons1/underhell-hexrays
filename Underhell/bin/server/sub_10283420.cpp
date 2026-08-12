int sub_10283420()
{
  if ( (dword_106D2FA4 & 1) == 0 )
  {
    dword_106D2FA4 |= 1u;
    sub_10122040((int)&unk_106D2A98, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D2AE4,
      (int)"baseclass",
      0,
      (int)off_10612678,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106D2B30, (int)"m_SpawnRate", 828, 4, 8, 0, 1.0, 1024.0, (int)sub_10121A20);
    sub_10121E50((int)&unk_106D2B7C, (int)"m_StartColor", 800, 12, 8, 0, 0.0, 1.0, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106D2BC8, (int)"m_EndColor", 812, 12, 8, 0, 0.0, 1.0, (int)sub_10121AA0);
    sub_10121D30((int)&unk_106D2C14, (int)"m_ParticleLifetime", 832, 4, 16, 16, 0.1, 100.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D2C60, (int)"m_StopEmitTime", 836, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D2CAC, (int)"m_MinSpeed", 840, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D2CF8, (int)"m_MaxSpeed", 844, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D2D44, (int)"m_StartSize", 848, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D2D90, (int)"m_EndSize", 852, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D2DDC, (int)"m_SpawnRadius", 856, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10234700((int)&unk_106D2E28, (int)"m_bEmit", 860, 1);
    sub_10122040((int)&unk_106D2E74, (int)"m_nAttachment", 864, 4, 32, 0, 0);
    sub_10121D30((int)&unk_106D2EC0, (int)"m_Opacity", 824, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106D2F0C, (int)"m_bDamaged", 868, 1, 1, 1, 0);
    sub_10121D30((int)&unk_106D2F58, (int)"m_flFlareScale", 872, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_10475610);
  }
  sub_10121D00(byte_106D40CC, (int)&unk_106D2AE4, 16, (int)off_1065AAC8[0]);
  return 1;
}

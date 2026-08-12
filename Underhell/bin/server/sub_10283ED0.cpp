int sub_10283ED0()
{
  if ( (dword_106D3FC4 & 1) == 0 )
  {
    dword_106D3FC4 |= 1u;
    sub_10122040((int)&unk_106D3AB8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D3B04,
      (int)"baseclass",
      0,
      (int)off_10612678,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106D3B50, (int)"m_SpawnRate", 828, 4, 8, 0, 1.0, 1024.0, (int)sub_10121A20);
    sub_10121E50((int)&unk_106D3B9C, (int)"m_StartColor", 800, 12, 8, 0, 0.0, 1.0, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106D3BE8, (int)"m_EndColor", 812, 12, 8, 0, 0.0, 1.0, (int)sub_10121AA0);
    sub_10121D30((int)&unk_106D3C34, (int)"m_ParticleLifetime", 832, 4, 16, 16, 0.1, 100.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D3C80, (int)"m_StopEmitTime", 836, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D3CCC, (int)"m_MinSpeed", 840, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D3D18, (int)"m_MaxSpeed", 844, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D3D64, (int)"m_MinDirectedSpeed", 860, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D3DB0, (int)"m_MaxDirectedSpeed", 864, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D3DFC, (int)"m_StartSize", 848, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D3E48, (int)"m_EndSize", 852, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D3E94, (int)"m_SpawnRadius", 856, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10234700((int)&unk_106D3EE0, (int)"m_bEmit", 868, 1);
    sub_10122040((int)&unk_106D3F2C, (int)"m_nAttachment", 872, 4, 32, 0, 0);
    sub_10121D30((int)&unk_106D3F78, (int)"m_Opacity", 824, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_104756F0);
  }
  sub_10121D00(byte_106D409C, (int)&unk_106D3B04, 16, (int)off_1065ABFC);
  return 1;
}

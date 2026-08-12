int sub_10283920()
{
  if ( (dword_106D3504 & 1) == 0 )
  {
    dword_106D3504 |= 1u;
    sub_10122040((int)&unk_106D3258, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D32A4,
      (int)"baseclass",
      0,
      (int)off_10612678,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106D32F0, (int)"m_flSpawnRate", 804, 4, 8, 0, 1.0, 1024.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D333C, (int)"m_flParticleLifetime", 808, 4, 16, 16, 0.1, 100.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D3388, (int)"m_flStartSize", 812, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D33D4, (int)"m_flEndSize", 816, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D3420, (int)"m_flSpawnRadius", 820, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10234700((int)&unk_106D346C, (int)"m_bEmit", 824, 1);
    sub_10234700((int)&unk_106D34B8, (int)"m_bDontRemove", 825, 1);
    atexit(sub_10475670);
  }
  sub_10121D00(byte_106D412C, (int)&unk_106D32A4, 8, (int)off_1065AAD0[0]);
  return 1;
}

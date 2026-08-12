int sub_10151790()
{
  if ( (dword_106B2C30 & 1) == 0 )
  {
    dword_106B2C30 |= 1u;
    sub_10122040((int)&unk_106B28A0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106B28EC,
      (int)"baseclass",
      0,
      (int)off_10612678,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106B2938, (int)"m_Color1", 800, 4, 32, 1, sub_102346A0);
    sub_10122040((int)&unk_106B2984, (int)"m_Color2", 804, 4, 32, 1, sub_102346A0);
    sub_10122120((int)&unk_106B29D0, (int)"m_MaterialName", 808, 255, 0, (int)sub_10121B10);
    sub_10121D30((int)&unk_106B2A1C, (int)"m_ParticleDrawWidth", 1068, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30(
      (int)&unk_106B2A68,
      (int)"m_ParticleSpacingDistance",
      1072,
      4,
      0,
      4,
      0.0,
      -121121.12,
      (int)sub_10121A20);
    sub_10121D30((int)&unk_106B2AB4, (int)"m_DensityRampSpeed", 1076, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106B2B00, (int)"m_RotationSpeed", 1080, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106B2B4C, (int)"m_MovementSpeed", 1084, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106B2B98, (int)"m_Density", 1088, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106B2BE4, (int)"m_spawnflags", 248, 4, 8, 1, 0);
    atexit(sub_10471600);
  }
  sub_10121D00(byte_106B2C6C, (int)&unk_106B28EC, 11, (int)off_10627248[0]);
  return 1;
}

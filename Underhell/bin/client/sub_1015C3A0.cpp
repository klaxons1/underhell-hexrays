int sub_1015C3A0()
{
  if ( (dword_1043F4E4 & 1) == 0 )
  {
    dword_1043F4E4 |= 1u;
    sub_1009AED0((int)&unk_1043F2C8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1043F304, (int)"baseclass", 0, 0, (int)off_103D7044, (int)sub_1009AE70);
    sub_1009AC40((int)&unk_1043F340, (int)"m_flSpawnRate", 1436, 4, 0, (int)sub_1009ADC0);
    sub_1009AC90((int)&unk_1043F37C, (int)"m_vecEndColor", 1424, 12, 0, (int)sub_1009ADD0);
    sub_1009AC40((int)&unk_1043F3B8, (int)"m_flParticleLifetime", 1440, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043F3F4, (int)"m_flStartSize", 1444, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043F430, (int)"m_flEndSize", 1448, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043F46C, (int)"m_flSpawnRadius", 1452, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_1043F4A8, (int)"m_bEmit", 1468, 1, 0, 0);
  }
  sub_1009AC10(dword_1043FA04, (int)&unk_1043F304, 8, (int)"DT_SporeTrail");
  return 1;
}

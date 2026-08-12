int sub_1015C150()
{
  if ( (dword_1043F2C4 & 1) == 0 )
  {
    dword_1043F2C4 |= 1u;
    sub_1009AED0((int)&unk_1043F0A8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1043F0E4, (int)"baseclass", 0, 0, (int)off_103D7044, (int)sub_1009AE70);
    sub_1009AC40((int)&unk_1043F120, (int)"m_flSpawnRate", 1428, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043F15C, (int)"m_flParticleLifetime", 1432, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043F198, (int)"m_flStartSize", 1436, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043F1D4, (int)"m_flEndSize", 1440, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043F210, (int)"m_flSpawnRadius", 1444, 4, 0, (int)sub_1009ADC0);
    sub_10116070((int)&unk_1043F24C, (int)"m_bEmit", 1452, 1);
    sub_10116070((int)&unk_1043F288, (int)"m_bDontRemove", 1453, 1);
  }
  sub_1009AC10(dword_1043F998, (int)&unk_1043F0E4, 8, (int)"DT_SporeExplosion");
  return 1;
}

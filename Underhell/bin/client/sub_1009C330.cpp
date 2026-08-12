int sub_1009C330()
{
  if ( (dword_1042D4F8 & 1) == 0 )
  {
    dword_1042D4F8 |= 1u;
    sub_1009AED0((int)&unk_1042D408, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AC40((int)&unk_1042D444, (int)"m_flLifetime", 8, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1042D480, (int)"m_flStartSize", 12, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1042D4BC, (int)"m_flEndSize", 16, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_1042D4FC, (int)&unk_1042D444, 3, (int)"DT_EntityParticleTrailInfo");
  return 1;
}

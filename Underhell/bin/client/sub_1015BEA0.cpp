int sub_1015BEA0()
{
  if ( (dword_1043F0A4 & 1) == 0 )
  {
    dword_1043F0A4 |= 1u;
    sub_1009AED0((int)&unk_1043ECA8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1043ECE4, (int)"baseclass", 0, 0, (int)off_103D7044, (int)sub_1009AE70);
    sub_1009AC40((int)&unk_1043ED20, (int)"m_SpawnRate", 1428, 4, 0, (int)sub_1009ADC0);
    sub_1009AC90((int)&unk_1043ED5C, (int)"m_StartColor", 1432, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_1043ED98, (int)"m_EndColor", 1444, 12, 0, (int)sub_1009ADD0);
    sub_1009AC40((int)&unk_1043EDD4, (int)"m_ParticleLifetime", 1460, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043EE10, (int)"m_StopEmitTime", 1464, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043EE4C, (int)"m_MinSpeed", 1468, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043EE88, (int)"m_MaxSpeed", 1472, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043EEC4, (int)"m_StartSize", 1476, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043EF00, (int)"m_EndSize", 1480, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043EF3C, (int)"m_SpawnRadius", 1484, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_1043EF78, (int)"m_bEmit", 1500, 1, 0, 0);
    sub_1009AED0((int)&unk_1043EFB4, (int)"m_nAttachment", 1504, 4, 0, 0);
    sub_1009AC40((int)&unk_1043EFF0, (int)"m_Opacity", 1456, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_1043F02C, (int)"m_bDamaged", 1501, 1, 0, 0);
    sub_1009AC40((int)&unk_1043F068, (int)"m_flFlareScale", 1520, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_1043F980, (int)&unk_1043ECE4, 16, (int)"DT_RocketTrail");
  return 1;
}

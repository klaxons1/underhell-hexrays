int sub_1015C600()
{
  if ( (dword_1043F964 & 1) == 0 )
  {
    dword_1043F964 |= 1u;
    sub_1009AED0((int)&unk_1043F5E0, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1043F61C, (int)"baseclass", 0, 0, (int)off_103D7044, (int)sub_1009AE70);
    sub_1009AC40((int)&unk_1043F658, (int)"m_SpawnRate", 1428, 4, 0, (int)sub_1009ADC0);
    sub_1009AC90((int)&unk_1043F694, (int)"m_Color", 1432, 12, 0, (int)sub_1009ADD0);
    sub_1009AC40((int)&unk_1043F6D0, (int)"m_ParticleLifetime", 1448, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043F70C, (int)"m_StopEmitTime", 1456, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043F748, (int)"m_MinSpeed", 1460, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043F784, (int)"m_MaxSpeed", 1464, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043F7C0, (int)"m_MinDirectedSpeed", 1468, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043F7FC, (int)"m_MaxDirectedSpeed", 1472, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043F838, (int)"m_StartSize", 1476, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043F874, (int)"m_EndSize", 1480, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043F8B0, (int)"m_SpawnRadius", 1484, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_1043F8EC, (int)"m_bEmit", 1500, 1, 0, 0);
    sub_1009AC40((int)&unk_1043F928, (int)"m_Opacity", 1444, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_1043FA34, (int)&unk_1043F61C, 14, (int)"DT_DustTrail");
  return 1;
}

int sub_1015BBB0()
{
  if ( (dword_1043ECA4 & 1) == 0 )
  {
    dword_1043ECA4 |= 1u;
    sub_1009AED0((int)&unk_1043E8A8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1043E8E4, (int)"baseclass", 0, 0, (int)off_103D7044, (int)sub_1009AE70);
    sub_1009AC40((int)&unk_1043E920, (int)"m_SpawnRate", 1428, 4, 0, (int)sub_1009ADC0);
    sub_1009AC90((int)&unk_1043E95C, (int)"m_StartColor", 1432, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_1043E998, (int)"m_EndColor", 1444, 12, 0, (int)sub_1009ADD0);
    sub_1009AC40((int)&unk_1043E9D4, (int)"m_ParticleLifetime", 1460, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043EA10, (int)"m_StopEmitTime", 1464, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043EA4C, (int)"m_MinSpeed", 1468, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043EA88, (int)"m_MaxSpeed", 1472, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043EAC4, (int)"m_MinDirectedSpeed", 1476, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043EB00, (int)"m_MaxDirectedSpeed", 1480, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043EB3C, (int)"m_StartSize", 1484, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043EB78, (int)"m_EndSize", 1488, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043EBB4, (int)"m_SpawnRadius", 1492, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_1043EBF0, (int)"m_bEmit", 1508, 1, 0, 0);
    sub_1009AED0((int)&unk_1043EC2C, (int)"m_nAttachment", 1512, 4, 0, 0);
    sub_1009AC40((int)&unk_1043EC68, (int)"m_Opacity", 1456, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_1043F968, (int)&unk_1043E8E4, 16, (int)"DT_SmokeTrail");
  return 1;
}

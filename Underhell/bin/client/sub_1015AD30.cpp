int sub_1015AD30()
{
  if ( (dword_1043E400 & 1) == 0 )
  {
    dword_1043E400 |= 1u;
    sub_1009AED0((int)&unk_1043E298, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1043E2D4, (int)"baseclass", 0, 0, (int)off_103D7044, (int)sub_1009AE70);
    sub_101160A0((int)&unk_1043E310, (int)"m_flSpawnTime", 1444, 4);
    sub_1009AC40((int)&unk_1043E34C, (int)"m_FadeStartTime", 1448, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043E388, (int)"m_FadeEndTime", 1452, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_1043E3C4, (int)"m_CurrentStage", 1428, 1, 0, (int (__cdecl *)(int, int, int))sub_1015A5E0);
  }
  sub_1009AC10(dword_1043E404, (int)&unk_1043E2D4, 5, (int)"DT_ParticleSmokeGrenade");
  return 1;
}

int sub_10043A40()
{
  int v1[15]; // [esp-40h] [ebp-84h] BYREF
  int v2[15]; // [esp+8h] [ebp-3Ch] BYREF

  if ( (dword_10408828 & 1) == 0 )
  {
    dword_10408828 |= 1u;
    sub_1009AED0(&unk_10408288, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_104082C4, "m_Local", 3460, 0, &unk_104075F8, sub_1009AE70);
    sub_1009AC40(&unk_10408300, "m_vecViewOffset[0]", 220, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040833C, "m_vecViewOffset[1]", 224, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10408378, "m_vecViewOffset[2]", 228, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_104083B4, "m_flFriction", 496, 4, 0, sub_1009ADC0);
    qmemcpy(v1, (const void *)sub_1009AED0(v2, "m_iAmmo[0]", 3024, 4, 0, 0), sizeof(v1));
    sub_1009AF50(
      (int)&unk_104083F0,
      (char)"m_iAmmo",
      3024,
      4,
      32,
      v1[0],
      v1[1],
      v1[2],
      v1[3],
      v1[4],
      v1[5],
      v1[6],
      v1[7],
      v1[8],
      v1[9],
      v1[10],
      v1[11],
      v1[12],
      v1[13],
      v1[14],
      (int)sub_1009AE70);
    sub_1009AED0(&unk_1040842C, "m_fOnTarget", 4000, 1, 0, 0);
    sub_1009AED0(&unk_10408468, "m_nTickBase", 4256, 4, 0, 0);
    sub_1009AED0(&unk_104084A4, "m_nNextThinkTick", 124, 4, 0, 0);
    sub_10116040(&unk_104084E0, "m_hLastWeapon", 4276, 4, sub_10116120);
    sub_10116040(&unk_1040851C, "m_hGroundEntity", 488, 4, sub_10116120);
    sub_1009AC40(&unk_10408558, "m_vecVelocity[0]", 232, 4, 0, sub_10043040);
    sub_1009AC40(&unk_10408594, "m_vecVelocity[1]", 236, 4, 0, sub_10043090);
    sub_1009AC40(&unk_104085D0, "m_vecVelocity[2]", 240, 4, 0, sub_100430E0);
    sub_1009AC90(&unk_1040860C, "m_vecBaseVelocity", 284, 12, 0, sub_1009ADD0);
    sub_10116040(&unk_10408648, "m_hConstraintEntity", 4056, 4, sub_10116120);
    sub_1009AC90(&unk_10408684, "m_vecConstraintCenter", 4060, 12, 0, sub_1009ADD0);
    sub_1009AC40(&unk_104086C0, "m_flConstraintRadius", 4072, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_104086FC, "m_flConstraintWidth", 4076, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10408738, "m_flConstraintSpeedFactor", 4080, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10408774, "m_flDeathTime", 4120, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_104087B0, "m_nWaterLevel", 320, 1, 0, 0);
    sub_1009AC40(&unk_104087EC, "m_flLaggedMovementValue", 4616, 4, 0, sub_1009ADC0);
  }
  sub_1009AC10(&unk_104082C4, 23, "DT_LocalPlayerExclusive");
  return 1;
}

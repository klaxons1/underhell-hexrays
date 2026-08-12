int sub_10025DB0()
{
  int v1[15]; // [esp-40h] [ebp-84h] BYREF
  int v2[15]; // [esp+8h] [ebp-3Ch] BYREF

  if ( (dword_1040453C & 1) == 0 )
  {
    dword_1040453C |= 1u;
    sub_1009AED0(&unk_10403FD8, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_10404014, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AED0(&unk_10404050, "m_nSequence", 1808, 4, 0, sub_10025D80);
    sub_1009AED0(&unk_1040408C, "m_nForceBone", 1260, 4, 0, 0);
    sub_1009AC90(&unk_104040C8, "m_vecForce", 1248, 12, 0, sub_1009ADD0);
    sub_1009AED0(&unk_10404104, "m_nSkin", 1196, 4, 0, 0);
    sub_1009AED0(&unk_10404140, "m_nBody", 1200, 4, 0, 0);
    sub_1009AED0(&unk_1040417C, "m_nHitboxSet", 1204, 4, 0, 0);
    sub_1009AC40(&unk_104041B8, "m_flModelWidthScale", 1400, 4, 0, sub_1009ADC0);
    qmemcpy(v1, (const void *)sub_1009AC40(v2, "m_flPoseParameter[0]", 1404, 4, 0, sub_1009ADC0), sizeof(v1));
    sub_1009AF50(
      (int)&unk_104041F4,
      (char)"m_flPoseParameter",
      1404,
      4,
      24,
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
    sub_1009AC40(&unk_10404230, "m_flPlaybackRate", 1236, 4, 0, sub_1009ADC0);
    qmemcpy(v1, (const void *)sub_1009AC40(v2, "m_flEncodedController[0]", 1684, 4, 0, sub_1009ADC0), sizeof(v1));
    sub_1009AF50(
      (int)&unk_1040426C,
      (char)"m_flEncodedController",
      1684,
      4,
      4,
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
    sub_1009AED0(&unk_104042A8, "m_bClientSideAnimation", 1760, 1, 0, 0);
    sub_1009AED0(&unk_104042E4, "m_bClientSideFrameReset", 1308, 1, 0, 0);
    sub_1009AED0(&unk_10404320, "m_nNewSequenceParity", 1764, 4, 0, 0);
    sub_1009AED0(&unk_1040435C, "m_nResetEventsParity", 1768, 4, 0, 0);
    sub_1009AED0(&unk_10404398, "m_nMuzzleFlashParity", 1936, 1, 0, 0);
    sub_10116040(&unk_104043D4, "m_hLightingOrigin", 1928, 4, sub_10116120);
    sub_10116040(&unk_10404410, "m_hLightingOriginRelative", 1932, 4, sub_10116120);
    sub_1009AD30(&unk_1040444C, "serveranimdata", 0, 0, &unk_104037B4, sub_1009AE70);
    sub_1009AC40(&unk_10404488, "m_fadeMinDist", 1312, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_104044C4, "m_fadeMaxDist", 1316, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10404500, "m_flFadeScale", 1320, 4, 0, sub_1009ADC0);
  }
  sub_1009AC10(&unk_10404014, 22, "DT_BaseAnimating");
  return 1;
}

int sub_10043490()
{
  int v1[15]; // [esp-40h] [ebp-84h] BYREF
  int v2[15]; // [esp+8h] [ebp-3Ch] BYREF

  if ( (dword_10408284 & 1) == 0 )
  {
    dword_10408284 |= 1u;
    sub_1009AED0(&unk_10407780, "should_never_see_this", 0, 4, 0, 0);
    qmemcpy(v1, (const void *)sub_1009AED0(v2, "m_chAreaBits[0]", 4, 1, 0, 0), sizeof(v1));
    sub_1009AF50(
      (int)&unk_104077BC,
      (char)"m_chAreaBits",
      4,
      1,
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
    qmemcpy(v1, (const void *)sub_1009AED0(v2, "m_chAreaPortalBits[0]", 36, 1, 0, 0), sizeof(v1));
    sub_1009AF50(
      (int)&unk_104077F8,
      (char)"m_chAreaPortalBits",
      36,
      1,
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
    sub_1009AED0(&unk_10407834, "m_iHideHUD", 60, 4, 0, 0);
    sub_1009AC40(&unk_10407870, "m_flFOVRate", 64, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_104078AC, "m_bDucked", 68, 1, 0, 0);
    sub_1009AED0(&unk_104078E8, "m_bDucking", 69, 1, 0, 0);
    sub_1009AED0(&unk_10407924, "m_bInDuckJump", 70, 1, 0, 0);
    sub_1009AC40(&unk_10407960, "m_flDucktime", 72, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040799C, "m_flDuckJumpTime", 76, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_104079D8, "m_flJumpTime", 80, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10407A14, "m_flFallVelocity", 88, 4, 0, sub_1009ADC0);
    sub_1009AC90(&unk_10407A50, "m_vecPunchAngle", 108, 12, 0, sub_1009ADD0);
    sub_1009AC90(&unk_10407A8C, "m_vecPunchAngleVel", 164, 12, 0, sub_1009ADD0);
    sub_1009AED0(&unk_10407AC8, "m_bDrawViewmodel", 220, 1, 0, 0);
    sub_1009AED0(&unk_10407B04, "m_bWearingSuit", 221, 1, 0, 0);
    sub_10116070(&unk_10407B40, "m_bPoisoned", 222, 1);
    sub_1009AC40(&unk_10407B7C, "m_flStepSize", 224, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_10407BB8, "m_bAllowAutoMovement", 228, 1, 0, 0);
    sub_1009AED0(&unk_10407BF4, "m_skybox3d.scale", 236, 4, 0, 0);
    sub_1009AC90(&unk_10407C30, "m_skybox3d.origin", 240, 12, 0, sub_1009ADD0);
    sub_1009AED0(&unk_10407C6C, "m_skybox3d.area", 252, 4, 0, 0);
    sub_1009AED0(&unk_10407CA8, "m_skybox3d.fog.enable", 320, 1, 0, 0);
    sub_1009AED0(&unk_10407CE4, "m_skybox3d.fog.blend", 321, 1, 0, 0);
    sub_1009AC90(&unk_10407D20, "m_skybox3d.fog.dirPrimary", 260, 12, 0, sub_1009ADD0);
    sub_1009AED0(&unk_10407D5C, "m_skybox3d.fog.colorPrimary", 272, 4, 0, 0);
    sub_1009AED0(&unk_10407D98, "m_skybox3d.fog.colorSecondary", 276, 4, 0, 0);
    sub_1009AC40(&unk_10407DD4, "m_skybox3d.fog.start", 288, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10407E10, "m_skybox3d.fog.end", 292, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10407E4C, "m_skybox3d.fog.maxdensity", 300, 4, 0, sub_1009ADC0);
    sub_10116040(&unk_10407E88, "m_PlayerFog.m_hCtrl", 328, 4, sub_10116120);
    sub_1009AC90(&unk_10407EC4, "m_audio.localSound[0]", 364, 12, 0, sub_1009ADD0);
    sub_1009AC90(&unk_10407F00, "m_audio.localSound[1]", 376, 12, 0, sub_1009ADD0);
    sub_1009AC90(&unk_10407F3C, "m_audio.localSound[2]", 388, 12, 0, sub_1009ADD0);
    sub_1009AC90(&unk_10407F78, "m_audio.localSound[3]", 400, 12, 0, sub_1009ADD0);
    sub_1009AC90(&unk_10407FB4, "m_audio.localSound[4]", 412, 12, 0, sub_1009ADD0);
    sub_1009AC90(&unk_10407FF0, "m_audio.localSound[5]", 424, 12, 0, sub_1009ADD0);
    sub_1009AC90(&unk_1040802C, "m_audio.localSound[6]", 436, 12, 0, sub_1009ADD0);
    sub_1009AC90(&unk_10408068, "m_audio.localSound[7]", 448, 12, 0, sub_1009ADD0);
    sub_1009AED0(&unk_104080A4, "m_audio.soundscapeIndex", 460, 4, 0, 0);
    sub_1009AED0(&unk_104080E0, "m_audio.localBits", 464, 4, 0, 0);
    sub_10116040(&unk_1040811C, "m_audio.ent", 468, 4, sub_10116120);
    sub_1009AC40(&unk_10408158, "m_TonemapParams.m_flTonemapScale", 480, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10408194, "m_TonemapParams.m_flTonemapRate", 484, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_104081D0, "m_TonemapParams.m_flBloomScale", 488, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040820C, "m_TonemapParams.m_flAutoExposureMin", 492, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10408248, "m_TonemapParams.m_flAutoExposureMax", 496, 4, 0, sub_1009ADC0);
  }
  sub_1009AC10(&unk_104077BC, 46, "DT_Local");
  return 1;
}

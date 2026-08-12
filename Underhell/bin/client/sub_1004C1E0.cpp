int sub_1004C1E0()
{
  if ( (dword_1040A330 & 1) == 0 )
  {
    dword_1040A330 |= 1u;
    sub_1009AED0(&unk_10409F70, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_10409FAC, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_10116040(&unk_10409FE8, "m_hTargetEntity", 1196, 4, sub_10116120);
    sub_10116070(&unk_1040A024, "m_bState", 1200, 1);
    sub_1009AC40(&unk_1040A060, "m_flLightFOV", 1204, 4, 0, sub_1009ADC0);
    sub_10116070(&unk_1040A09C, "m_bEnableShadows", 1208, 1);
    sub_10116070(&unk_1040A0D8, "m_bLightOnlyTarget", 1209, 1);
    sub_10116070(&unk_1040A114, "m_bLightWorld", 1210, 1);
    sub_10116070(&unk_1040A150, "m_bCameraSpace", 1211, 1);
    sub_1009AC90(&unk_1040A18C, "m_LinearFloatLightColor", 1212, 12, 0, sub_1009ADD0);
    sub_1009AC40(&unk_1040A1C8, "m_flAmbient", 1224, 4, 0, sub_1009ADC0);
    sub_1009ACE0(&unk_1040A204, "m_SpotlightTextureName", 1236, 260, 0, sub_1009AE20);
    sub_1009AED0(&unk_1040A240, "m_nSpotlightTextureFrame", 1496, 4, 0, 0);
    sub_1009AC40(&unk_1040A27C, "m_flNearZ", 1228, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040A2B8, "m_flFarZ", 1232, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_1040A2F4, "m_nShadowQuality", 1500, 4, 0, 0);
  }
  sub_1009AC10(&unk_10409FAC, 15, "DT_EnvProjectedTexture");
  return 1;
}

int sub_10016370()
{
  int v1[15]; // [esp-40h] [ebp-84h] BYREF
  int v2[15]; // [esp+8h] [ebp-3Ch] BYREF

  if ( (dword_104031D8 & 1) == 0 )
  {
    dword_104031D8 |= 1u;
    sub_1009AED0(&unk_10402BC0, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AED0(&unk_10402BFC, "m_nBeamType", 1220, 4, 0, 0);
    sub_1009AED0(&unk_10402C38, "m_nBeamFlags", 1224, 4, 0, 0);
    sub_1009AED0(&unk_10402C74, "m_nNumBeamEnts", 1208, 4, 0, 0);
    qmemcpy(v1, (const void *)sub_10116040(v2, "m_hAttachEntity[0]", 1228, 4, sub_10116120), sizeof(v1));
    sub_1009AF50(
      (int)&unk_10402CB0,
      (char)"m_hAttachEntity",
      1228,
      4,
      10,
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
    qmemcpy(v1, (const void *)sub_1009AED0(v2, "m_nAttachIndex[0]", 1268, 4, 0, 0), sizeof(v1));
    sub_1009AF50(
      (int)&unk_10402CEC,
      (char)"m_nAttachIndex",
      1268,
      4,
      10,
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
    sub_1009AED0(&unk_10402D28, "m_nHaloIndex", 1216, 4, 0, 0);
    sub_1009AC40(&unk_10402D64, "m_fHaloScale", 1320, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10402DA0, "m_fWidth", 1308, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10402DDC, "m_fEndWidth", 1312, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10402E18, "m_fFadeLength", 1316, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10402E54, "m_fAmplitude", 1324, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10402E90, "m_fStartFrame", 1328, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10402ECC, "m_fSpeed", 1332, 4, 0, sub_10016340);
    sub_1009AC40(&unk_10402F08, "m_flFrameRate", 1192, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10402F44, "m_flHDRColorScale", 1196, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_10402F80, "m_clrRender", 88, 4, 0, 0);
    sub_1009AED0(&unk_10402FBC, "m_nRenderFX", 84, 1, 0, 0);
    sub_1009AED0(&unk_10402FF8, "m_nRenderMode", 116, 1, 0, 0);
    sub_1009AC40(&unk_10403034, "m_flFrame", 1340, 4, 0, sub_1009ADC0);
    sub_1009AC90(&unk_10403070, "m_vecEndPos", 1344, 12, 0, sub_1009ADD0);
    sub_1009AED0(&unk_104030AC, "m_nModelIndex", 132, 2, 0, 0);
    sub_1009AED0(&unk_104030E8, "m_nMinDXLevel", 1336, 4, 0, 0);
    sub_1009AC90(&unk_10403124, "m_vecOrigin", 708, 12, 0, sub_1009ADD0);
    sub_1009AED0(&unk_10403160, "moveparent", 340, 4, 0, sub_10116120);
    sub_1009AD30(&unk_1040319C, "beampredictable_id", 0, 0, &unk_104031E0, sub_1009AE70);
  }
  sub_1009AC10(&unk_10402BFC, 25, "DT_Beam");
  return 1;
}

int sub_10058E00()
{
  int v1[15]; // [esp-40h] [ebp-84h] BYREF
  int v2[15]; // [esp+8h] [ebp-3Ch] BYREF

  if ( (dword_1040CC9C & 1) == 0 )
  {
    dword_1040CC9C |= 1u;
    sub_1009AED0(&unk_1040CA08, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AC90(&unk_1040CA44, "m_vecOrigin", 708, 12, 0, sub_1009ADD0);
    sub_10116040(&unk_1040CA80, "m_hOwnerEntity", 1124, 4, sub_10116120);
    sub_1009AED0(&unk_1040CABC, "moveparent", 340, 4, 0, sub_10116120);
    sub_1009AED0(&unk_1040CAF8, "m_iParentAttachment", 318, 1, 0, 0);
    sub_1009AC90(&unk_1040CB34, "m_angRotation", 720, 12, 0, sub_1009ADD0);
    sub_1009AED0(&unk_1040CB70, "m_iEffectIndex", 1192, 4, 0, 0);
    sub_10116070(&unk_1040CBAC, "m_bActive", 1196, 1);
    sub_1009AC40(&unk_1040CBE8, "m_flStartTime", 1200, 4, 0, sub_1009ADC0);
    qmemcpy(v1, (const void *)sub_10116040(v2, "m_hControlPointEnts[0]", 1204, 4, sub_10116120), sizeof(v1));
    sub_1009AF50(
      (int)&unk_1040CC24,
      (char)"m_hControlPointEnts",
      1204,
      4,
      63,
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
    qmemcpy(v1, (const void *)sub_1009AED0(v2, "m_iControlPointParents[0]", 1456, 1, 0, 0), sizeof(v1));
    sub_1009AF50(
      (int)&unk_1040CC60,
      (char)"m_iControlPointParents",
      1456,
      1,
      63,
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
  }
  sub_1009AC10(&unk_1040CA44, 10, "DT_ParticleSystem");
  return 1;
}

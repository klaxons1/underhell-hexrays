int sub_1004F1B0()
{
  int v1[15]; // [esp-40h] [ebp-84h] BYREF
  int v2[15]; // [esp+8h] [ebp-3Ch] BYREF

  if ( (dword_1040B2CC & 1) == 0 )
  {
    dword_1040B2CC |= 1u;
    sub_1009AED0(&unk_1040B038, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040B074, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AED0(&unk_1040B0B0, "m_nNumWide", 1196, 4, 0, 0);
    sub_1009AED0(&unk_1040B0EC, "m_nNumHigh", 1200, 4, 0, 0);
    sub_1009AC40(&unk_1040B128, "m_flPanelWidth", 1204, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040B164, "m_flPanelHeight", 1208, 4, 0, sub_1009ADC0);
    sub_1009AC90(&unk_1040B1A0, "m_vNormal", 1212, 12, 0, sub_1009ADD0);
    sub_1009AC90(&unk_1040B1DC, "m_vCorner", 1224, 12, 0, sub_1009ADD0);
    sub_1009AED0(&unk_1040B218, "m_bIsBroken", 1236, 1, 0, 0);
    sub_1009AED0(&unk_1040B254, "m_nSurfaceType", 1240, 4, 0, 0);
    qmemcpy(v1, (const void *)sub_1009AED0(v2, "m_RawPanelBitVec[ 0 ]", 1276, 1, 0, 0), sizeof(v1));
    sub_1009AF50(
      (int)&unk_1040B290,
      (char)"m_RawPanelBitVec",
      1276,
      1,
      256,
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
  sub_1009AC10(&unk_1040B074, 10, "DT_BreakableSurface");
  return 1;
}

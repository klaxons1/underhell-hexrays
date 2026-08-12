int sub_10104E70()
{
  int v1[15]; // [esp-40h] [ebp-84h] BYREF
  _BYTE v2[60]; // [esp+8h] [ebp-3Ch] BYREF

  if ( (dword_1043670C & 1) == 0 )
  {
    dword_1043670C |= 1u;
    sub_1009AED0((int)&unk_10436400, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1043643C, (int)"baseclass", 0, 0, off_103D89D4, (int)sub_1009AE70);
    qmemcpy(v1, (const void *)sub_10116040(v2, "m_hProps[0]", 1192, 4, sub_10116120), sizeof(v1));
    sub_1009AF50(
      (int)&unk_10436478,
      (int)"m_hProps",
      1192,
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
    qmemcpy(v1, (const void *)sub_1009AED0((int)v2, (int)"m_chPoseIndex[0]", 1208, 1, 0, 0), sizeof(v1));
    sub_1009AF50(
      (int)&unk_104364B4,
      (int)"m_chPoseIndex",
      1208,
      1,
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
    sub_10116070(&unk_104364F0, "m_bPoseValueParity", 1212, 1);
    sub_1009AC40((int)&unk_1043652C, (int)"m_fPoseValue", 1216, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10436568, (int)"m_fInterpolationTime", 1220, 4, 0, (int)sub_1009ADC0);
    sub_10116070(&unk_104365A4, "m_bInterpolationWrap", 1224, 1);
    sub_1009AC40((int)&unk_104365E0, (int)"m_fCycleFrequency", 1228, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_1043661C, (int)"m_nFModType", 1232, 4, 0, 0);
    sub_1009AC40((int)&unk_10436658, (int)"m_fFModTimeOffset", 1236, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10436694, (int)"m_fFModRate", 1240, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_104366D0, (int)"m_fFModAmplitude", 1244, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_10436710, (int)&unk_1043643C, 12, (int)"DT_PoseController");
  return 1;
}

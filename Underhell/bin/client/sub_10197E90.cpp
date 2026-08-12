int sub_10197E90()
{
  if ( (dword_10448720 & 1) == 0 )
  {
    dword_10448720 |= 1u;
    sub_1009AED0((int)&unk_10448270, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_104482AC, (int)"baseclass", 0, 0, off_103D89D4, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_104482E8, (int)"m_vecCameraView", 1288, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_10448324, (int)"m_vecCameraViewAngles", 1300, 12, 0, (int)sub_1009ADD0);
    sub_1009AED0((int)&unk_10448360, (int)"m_iBlendMode", 1312, 4, 0, 0);
    sub_1009AED0((int)&unk_1044839C, (int)"m_iNextBlendMode", 1316, 4, 0, 0);
    sub_1009AC40((int)&unk_104483D8, (int)"m_flNextBlendTime", 1320, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10448414, (int)"m_flBlendStartTime", 1324, 4, 0, (int)sub_1009ADC0);
    sub_10116070((int)&unk_10448450, (int)"m_bActive", 1328, 1);
    sub_1009AED0((int)&unk_1044848C, (int)"m_iFOV", 1196, 4, 0, 0);
    sub_1009AED0((int)&unk_104484C8, (int)"m_iNextFOV", 1192, 4, 0, 0);
    sub_1009AED0((int)&unk_10448504, (int)"m_iStartFOV", 1204, 4, 0, 0);
    sub_1009AC40((int)&unk_10448540, (int)"m_flNextFOVBlendTime", 1208, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1044857C, (int)"m_flFOVBlendStartTime", 1212, 4, 0, (int)sub_1009ADC0);
    sub_10116070((int)&unk_104485B8, (int)"m_bAlternateFOV", 1216, 1);
    sub_1009AC40((int)&unk_104485F4, (int)"m_flFadeAlpha", 1348, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10448630, (int)"m_flFadeColor[0]", 1336, 4, 0, (int)sub_1009ADC0);
    sub_1009AD80((int)&unk_1044866C, 3, 4, (int)"m_flFadeColor", 0);
    sub_1009AC40((int)&unk_104486A8, (int)"m_flFadeDuration", 1356, 4, 0, (int)sub_1009ADC0);
    sub_10116040((int)&unk_104486E4, (int)"m_hCameraEntity", 1332, 4, (int (__cdecl *)(int, int, int))sub_10116120);
  }
  sub_1009AC10(dword_10448724, (int)&unk_104482AC, 19, (int)"DT_ScriptIntro");
  return 1;
}

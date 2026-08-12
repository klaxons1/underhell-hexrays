int sub_101A70B0()
{
  if ( (dword_1044C94C & 1) == 0 )
  {
    dword_1044C94C |= 1u;
    sub_1009AED0((int)&unk_1044C550, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AC40((int)&unk_1044C58C, (int)"m_flFlightSpeed", 56, 4, 0, (int)sub_1009ADC0);
    sub_101160A0((int)&unk_1044C5C8, (int)"m_flLaunchTime", 60, 4);
    sub_1009AC90((int)&unk_1044C604, (int)"m_vecParabolaDirection", 80, 12, 0, (int)sub_1009ADD0);
    sub_1009AC40((int)&unk_1044C640, (int)"m_flFlightTime", 52, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1044C67C, (int)"m_flWorldEnterTime", 92, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1044C6B8, (int)"m_flInitialZSpeed", 64, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1044C6F4, (int)"m_flZAcceleration", 68, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1044C730, (int)"m_flHorizSpeed", 72, 4, 0, (int)sub_1009ADC0);
    sub_10116070((int)&unk_1044C76C, (int)"m_bLaunchedFromWithinWorld", 76, 1);
    sub_1009AC90((int)&unk_1044C7A8, (int)"m_vecStartPosition", 4, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_1044C7E4, (int)"m_vecEnterWorldPosition", 16, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_1044C820, (int)"m_vecDirection", 28, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_1044C85C, (int)"m_vecStartAngles", 40, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_1044C898, (int)"m_vecSkyboxOrigin", 96, 12, 0, (int)sub_1009ADD0);
    sub_1009AC40((int)&unk_1044C8D4, (int)"m_flSkyboxScale", 108, 4, 0, (int)sub_1009ADC0);
    sub_10116070((int)&unk_1044C910, (int)"m_bInSkybox", 112, 1);
  }
  sub_1009AC10(dword_1044C974, (int)&unk_1044C58C, 16, (int)"DT_EnvHeadcrabCanisterShared");
  return 1;
}

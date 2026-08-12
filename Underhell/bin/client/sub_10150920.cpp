int sub_10150920()
{
  if ( (dword_1043DB5C & 1) == 0 )
  {
    dword_1043DB5C |= 1u;
    sub_1009AED0((int)&unk_1043D850, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AED0((int)&unk_1043D88C, (int)"m_iMinWind", 12, 4, 0, 0);
    sub_1009AED0((int)&unk_1043D8C8, (int)"m_iMaxWind", 16, 4, 0, 0);
    sub_1009AED0((int)&unk_1043D904, (int)"m_iMinGust", 20, 4, 0, 0);
    sub_1009AED0((int)&unk_1043D940, (int)"m_iMaxGust", 24, 4, 0, 0);
    sub_1009AC40((int)&unk_1043D97C, (int)"m_flMinGustDelay", 28, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043D9B8, (int)"m_flMaxGustDelay", 32, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_1043D9F4, (int)"m_iGustDirChange", 40, 4, 0, 0);
    sub_1009AED0((int)&unk_1043DA30, (int)"m_iWindSeed", 8, 4, 0, 0);
    sub_1009AED0((int)&unk_1043DA6C, (int)"m_iInitialWindDir", 56, 4, 0, 0);
    sub_1009AC40((int)&unk_1043DAA8, (int)"m_flInitialWindSpeed", 60, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043DAE4, (int)"m_flStartTime", 4, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043DB20, (int)"m_flGustDuration", 36, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_1043D734, (int)&unk_1043D88C, 12, (int)"DT_EnvWindShared");
  return 1;
}

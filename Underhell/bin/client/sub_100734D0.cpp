int sub_100734D0()
{
  if ( (dword_10413040 & 1) == 0 )
  {
    dword_10413040 |= 1u;
    sub_1009AED0(&unk_10412D70, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_10412DAC, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AC40(&unk_10412DE8, "m_flWaveHeight", 1192, 4, 0, sub_1009ADC0);
    sub_1009AC90(&unk_10412E24, "m_WorldMins", 1196, 12, 0, sub_1009ADD0);
    sub_1009AC90(&unk_10412E60, "m_WorldMaxs", 1208, 12, 0, sub_1009ADD0);
    sub_1009AED0(&unk_10412E9C, "m_bStartDark", 1220, 1, 0, 0);
    sub_1009AC40(&unk_10412ED8, "m_flMaxOccludeeArea", 1224, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10412F14, "m_flMinOccluderArea", 1228, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10412F50, "m_flMaxPropScreenSpaceWidth", 1236, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10412F8C, "m_flMinPropScreenSpaceWidth", 1232, 4, 0, sub_1009ADC0);
    sub_1009ACE0(&unk_10412FC8, "m_iszDetailSpriteMaterial", 1241, 256, 0, sub_1009AE20);
    sub_1009AED0(&unk_10413004, "m_bColdWorld", 1240, 1, 0, 0);
  }
  sub_1009AC10(&unk_10412DAC, 11, "DT_World");
  return 1;
}

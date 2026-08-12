int sub_10124030()
{
  if ( (dword_10437E24 & 1) == 0 )
  {
    dword_10437E24 |= 1u;
    sub_1009AED0((int)&unk_10437B18, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10437B54, (int)"baseclass", 0, 0, off_103D89D4, (int)sub_1009AE70);
    sub_10116040((int)&unk_10437B90, (int)"m_hAttachedToEntity", 1208, 4, (int (__cdecl *)(int, int, int))sub_10116120);
    sub_1009AED0((int)&unk_10437BCC, (int)"m_nAttachment", 1212, 4, 0, 0);
    sub_1009AC40((int)&unk_10437C08, (int)"m_flScaleTime", 1240, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10437C44, (int)"m_flSpriteScale", 1236, 4, 0, (int)sub_10123FE0);
    sub_1009AC40((int)&unk_10437C80, (int)"m_flSpriteFramerate", 1216, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10437CBC, (int)"m_flGlowProxySize", 1248, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10437CF8, (int)"m_flHDRColorScale", 1252, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10437D34, (int)"m_flFrame", 1220, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10437D70, (int)"m_flBrightnessTime", 1232, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_10437DAC, (int)"m_nBrightness", 1228, 4, 0, 0);
    sub_10116070((int)&unk_10437DE8, (int)"m_bWorldSpaceScale", 1244, 1);
  }
  sub_1009AC10(dword_10437E2C, (int)&unk_10437B54, 12, (int)"DT_Sprite");
  return 1;
}

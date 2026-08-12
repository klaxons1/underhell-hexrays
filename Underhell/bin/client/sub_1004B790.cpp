int sub_1004B790()
{
  if ( (dword_10409E78 & 1) == 0 )
  {
    dword_10409E78 |= 1u;
    sub_1009AED0(&unk_10409AB8, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AED0(&unk_10409AF4, "m_fog.enable", 1256, 1, 0, 0);
    sub_1009AED0(&unk_10409B30, "m_fog.blend", 1257, 1, 0, 0);
    sub_1009AC90(&unk_10409B6C, "m_fog.dirPrimary", 1196, 12, 0, sub_1009ADD0);
    sub_1009AED0(&unk_10409BA8, "m_fog.colorPrimary", 1208, 4, 0, 0);
    sub_1009AED0(&unk_10409BE4, "m_fog.colorSecondary", 1212, 4, 0, 0);
    sub_1009AC40(&unk_10409C20, "m_fog.start", 1224, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10409C5C, "m_fog.end", 1228, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10409C98, "m_fog.farz", 1232, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10409CD4, "m_fog.maxdensity", 1236, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_10409D10, "m_fog.colorPrimaryLerpTo", 1216, 4, 0, 0);
    sub_1009AED0(&unk_10409D4C, "m_fog.colorSecondaryLerpTo", 1220, 4, 0, 0);
    sub_1009AC40(&unk_10409D88, "m_fog.startLerpTo", 1240, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10409DC4, "m_fog.endLerpTo", 1244, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10409E00, "m_fog.lerptime", 1248, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10409E3C, "m_fog.duration", 1252, 4, 0, sub_1009ADC0);
  }
  sub_1009AC10(&unk_10409AF4, 15, "DT_FogController");
  return 1;
}

int sub_10124990()
{
  if ( (dword_104380D8 & 1) == 0 )
  {
    dword_104380D8 |= 1u;
    sub_1009AED0((int)&unk_10437E80, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10437EBC, (int)"baseclass", 0, 0, (int)off_103E6038, (int)sub_1009AE70);
    sub_1009AC40((int)&unk_10437EF8, (int)"m_flLifeTime", 2876, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10437F34, (int)"m_flStartWidth", 2880, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10437F70, (int)"m_flEndWidth", 2884, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10437FAC, (int)"m_flStartWidthVariance", 2888, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10437FE8, (int)"m_flTextureRes", 2892, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10438024, (int)"m_flMinFadeLength", 2896, 4, 0, (int)sub_1009ADC0);
    sub_1009AC90((int)&unk_10438060, (int)"m_vecSkyboxOrigin", 2900, 12, 0, (int)sub_1009ADD0);
    sub_1009AC40((int)&unk_1043809C, (int)"m_flSkyboxScale", 2912, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_1043816C, (int)&unk_10437EBC, 9, (int)"DT_SpriteTrail");
  return 1;
}

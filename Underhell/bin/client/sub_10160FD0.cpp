int sub_10160FD0()
{
  if ( (dword_1043FF00 & 1) == 0 )
  {
    dword_1043FF00 |= 1u;
    sub_1009AED0((int)&unk_1043FA50, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1043FA8C, (int)"baseclass", 0, 0, (int)off_103D7044, (int)sub_1009AE70);
    sub_1009AC40((int)&unk_1043FAC8, (int)"m_SpreadSpeed", 1508, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043FB04, (int)"m_Speed", 1512, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043FB40, (int)"m_StartSize", 1516, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043FB7C, (int)"m_EndSize", 1520, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043FBB8, (int)"m_Rate", 1524, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043FBF4, (int)"m_JetLength", 1528, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_1043FC30, (int)"m_bEmit", 1532, 4, 0, 0);
    sub_1009AC40((int)&unk_1043FC6C, (int)"m_flBaseSpread", 1536, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043FCA8, (int)"m_flTwist", 1620, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043FCE4, (int)"m_flRollSpeed", 1708, 4, 0, (int)sub_1009ADC0);
    sub_10116040((int)&unk_1043FD20, (int)"m_iMaterialModel", 1624, 4, (int (__cdecl *)(int, int, int))sub_10116000);
    sub_1009AC90((int)&unk_1043FD5C, (int)"m_AmbientLight.m_vPos", 1540, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_1043FD98, (int)"m_AmbientLight.m_vColor", 1552, 12, 0, (int)sub_1009ADD0);
    sub_1009AC40((int)&unk_1043FDD4, (int)"m_AmbientLight.m_flIntensity", 1564, 4, 0, (int)sub_1009ADC0);
    sub_1009AC90((int)&unk_1043FE10, (int)"m_DirLight.m_vPos", 1568, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_1043FE4C, (int)"m_DirLight.m_vColor", 1580, 12, 0, (int)sub_1009ADD0);
    sub_1009AC40((int)&unk_1043FE88, (int)"m_DirLight.m_flIntensity", 1592, 4, 0, (int)sub_1009ADC0);
    sub_1009AC90((int)&unk_1043FEC4, (int)"m_vWind", 1608, 12, 0, (int)sub_1009ADD0);
  }
  sub_1009AC10(dword_1043FF04, (int)&unk_1043FA8C, 19, (int)"DT_SmokeStack");
  return 1;
}

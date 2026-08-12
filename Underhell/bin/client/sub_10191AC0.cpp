int sub_10191AC0()
{
  if ( (dword_10446ED4 & 1) == 0 )
  {
    dword_10446ED4 |= 1u;
    sub_1009AED0((int)&unk_10446DA8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10446DE4, (int)"baseclass", 0, 0, off_103D89D4, (int)sub_1009AE70);
    sub_1009AC40((int)&unk_10446E20, (int)"m_flLifespan", 1204, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10446E5C, (int)"m_flRadius", 1208, 4, 0, (int)sub_1009ADC0);
    sub_1009AC90((int)&unk_10446E98, (int)"m_vecSurfaceNormal", 1216, 12, 0, (int)sub_1009ADD0);
  }
  sub_1009AC10(dword_10446ED8, (int)&unk_10446DE4, 4, (int)"DT_MortarShell");
  return 1;
}

int sub_10048E70()
{
  if ( (dword_10409968 & 1) == 0 )
  {
    dword_10409968 |= 1u;
    sub_1009AED0(&unk_10409698, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_104096D4, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_101160A0(&unk_10409710, "m_flStartTime", 1196, 4);
    sub_1009AC40(&unk_1040974C, "m_flFadeOutStart", 1200, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10409788, "m_flFadeOutLength", 1204, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_104097C4, "m_flFadeOutModelStart", 1208, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10409800, "m_flFadeOutModelLength", 1212, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040983C, "m_flFadeInStart", 1216, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10409878, "m_flFadeInLength", 1220, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_104098B4, "m_nDissolveType", 1224, 4, 0, 0);
    sub_1009AC90(&unk_104098F0, "m_vDissolverOrigin", 1232, 12, 0, sub_1009ADD0);
    sub_1009AED0(&unk_1040992C, "m_nMagnitude", 1244, 4, 0, 0);
  }
  sub_1009AC10(&unk_104096D4, 11, "DT_EntityDissolve");
  return 1;
}

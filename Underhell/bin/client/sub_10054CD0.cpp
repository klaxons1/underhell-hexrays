int sub_10054CD0()
{
  if ( (dword_1040C12C & 1) == 0 )
  {
    dword_1040C12C |= 1u;
    sub_1009AED0(&unk_1040BE20, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040BE5C, "baseclass", 0, 0, off_103D7044, sub_1009AE70);
    sub_1009AED0(&unk_1040BE98, "m_Color1", 1428, 4, 0, sub_10115FD0);
    sub_1009AED0(&unk_1040BED4, "m_Color2", 1432, 4, 0, sub_10115FD0);
    sub_1009ACE0(&unk_1040BF10, "m_MaterialName", 1436, 255, 0, sub_1009AE20);
    sub_1009AC40(&unk_1040BF4C, "m_ParticleDrawWidth", 1692, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040BF88, "m_ParticleSpacingDistance", 1696, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040BFC4, "m_DensityRampSpeed", 1700, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040C000, "m_RotationSpeed", 1704, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040C03C, "m_MovementSpeed", 1708, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040C078, "m_Density", 1712, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_1040C0B4, "m_spawnflags", 1716, 4, 0, 0);
    sub_1009AD30(&unk_1040C0F0, "m_Collision", 352, 0, &unk_1042CA60, sub_1009AE70);
  }
  sub_1009AC10(&unk_1040BE5C, 12, "DT_FuncSmokeVolume");
  return 1;
}

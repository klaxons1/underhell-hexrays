int sub_1004BA70()
{
  if ( (dword_10409F4C & 1) == 0 )
  {
    dword_10409F4C |= 1u;
    sub_1009AED0(&unk_10409E98, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_10409ED4, "baseclass", 0, 0, off_103D7B8C, sub_1009AE70);
    sub_1009AC40(&unk_10409F10, "m_flSequenceScale", 2188, 4, 0, sub_1009ADC0);
  }
  sub_1009AC10(&unk_10409ED4, 2, "DT_EnvParticleScript");
  return 1;
}

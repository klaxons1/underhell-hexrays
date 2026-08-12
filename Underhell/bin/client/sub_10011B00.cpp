int sub_10011B00()
{
  if ( (dword_10402288 & 1) == 0 )
  {
    dword_10402288 |= 1u;
    sub_1009AED0(&unk_10402210, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040224C, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
  }
  sub_1009AC10(&unk_1040224C, 1, "DT_BaseParticleEntity");
  return 1;
}

int sub_10072E50()
{
  if ( (dword_10412C00 & 1) == 0 )
  {
    dword_10412C00 |= 1u;
    sub_1009AED0(&unk_10412B88, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_10412BC4, "baseclass", 0, 0, off_103D7B8C, sub_1009AE70);
  }
  sub_1009AC10(&unk_10412BC4, 1, "DT_WaterBullet");
  return 1;
}

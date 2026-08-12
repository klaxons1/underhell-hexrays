int sub_1004D770()
{
  if ( (dword_1040AB40 & 1) == 0 )
  {
    dword_1040AB40 |= 1u;
    sub_1009AED0(&unk_1040A960, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040A99C, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AC40(&unk_1040A9D8, "m_flStartScale", 1192, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040AA14, "m_flScale", 1196, 4, 0, sub_1004D6A0);
    sub_1009AC40(&unk_1040AA50, "m_flScaleTime", 1200, 4, 0, sub_1004D6F0);
    sub_1009AED0(&unk_1040AA8C, "m_nFlags", 1204, 4, 0, 0);
    sub_1009AED0(&unk_1040AAC8, "m_nFlameModelIndex", 1208, 4, 0, 0);
    sub_1009AED0(&unk_1040AB04, "m_nFlameFromAboveModelIndex", 1212, 4, 0, 0);
  }
  sub_1009AC10(&unk_1040A99C, 7, "DT_FireSmoke");
  return 1;
}

int sub_10025840()
{
  if ( (dword_10403BD0 & 1) == 0 )
  {
    dword_10403BD0 |= 1u;
    sub_1009AED0(&unk_10403AE0, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_10403B1C, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AED0(&unk_10403B58, "m_modelIndex", 1192, 4, 0, 0);
    sub_1009AED0(&unk_10403B94, "m_solidIndex", 1196, 4, 0, 0);
  }
  sub_1009AC10(&unk_10403B1C, 3, "DT_BoneFollower");
  return 1;
}

int sub_1006E330()
{
  if ( (dword_104121B8 & 1) == 0 )
  {
    dword_104121B8 |= 1u;
    sub_1009AED0(&unk_104120C8, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_10412104, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009ACE0(&unk_10412140, "m_SoundName", 1228, 64, 0, sub_1009AE20);
    sub_1009ACE0(&unk_1041217C, "m_iszSpriteName", 1292, 256, 0, sub_1009AE20);
  }
  sub_1009AC10(&unk_10412104, 3, "DT_Tesla");
  return 1;
}

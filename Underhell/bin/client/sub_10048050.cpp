int sub_10048050()
{
  if ( (dword_104090C8 & 1) == 0 )
  {
    dword_104090C8 |= 1u;
    sub_1009AED0(&unk_10409050, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040908C, "baseclass", 0, 0, off_103D7B8C, sub_1009AE70);
  }
  sub_1009AC10(&unk_1040908C, 1, "DT_BtBullet");
  return 1;
}

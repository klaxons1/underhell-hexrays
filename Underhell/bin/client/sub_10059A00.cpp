int sub_10059A00()
{
  if ( (dword_1040CF78 & 1) == 0 )
  {
    dword_1040CF78 |= 1u;
    sub_1009AED0(&unk_1040CF00, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040CF3C, "baseclass", 0, 0, off_103D7B8C, sub_1009AE70);
  }
  sub_1009AC10(&unk_1040CF3C, 1, "DT_PhysMagnet");
  return 1;
}

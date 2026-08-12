int sub_10054630()
{
  if ( (dword_1040BC18 & 1) == 0 )
  {
    dword_1040BC18 |= 1u;
    sub_1009AED0(&unk_1040BB28, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040BB64, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_10116070(&unk_1040BBA0, "m_bActive", 1196, 1);
    sub_1009AED0(&unk_1040BBDC, "m_nOccluderIndex", 1192, 4, 0, 0);
  }
  sub_1009AC10(&unk_1040BB64, 3, "DT_FuncOccluder");
  return 1;
}

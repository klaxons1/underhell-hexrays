int sub_10053500()
{
  if ( (dword_1040BA30 & 1) == 0 )
  {
    dword_1040BA30 |= 1u;
    sub_1009AED0(&unk_1040B9B8, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040B9F4, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
  }
  sub_1009AC10(&unk_1040B9F4, 1, "DT_FuncMonitor");
  return 1;
}

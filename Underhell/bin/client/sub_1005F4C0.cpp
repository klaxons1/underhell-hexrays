int sub_1005F4C0()
{
  if ( (dword_1040DD18 & 1) == 0 )
  {
    dword_1040DD18 |= 1u;
    sub_1009AED0(&unk_1040DCA0, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040DCDC, "baseclass", 0, 0, off_103DBA58, sub_1009AE70);
  }
  sub_1009AC10(&unk_1040DCDC, 1, "DT_BasePropDoor");
  return 1;
}

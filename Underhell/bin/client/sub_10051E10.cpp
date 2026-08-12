int sub_10051E10()
{
  if ( (dword_1040B3CC & 1) == 0 )
  {
    dword_1040B3CC |= 1u;
    sub_1009AED0(&unk_1040B318, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040B354, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AC40(&unk_1040B390, "m_flConveyorSpeed", 1192, 4, 0, sub_1009ADC0);
  }
  sub_1009AC10(&unk_1040B354, 2, "DT_FuncConveyor");
  return 1;
}

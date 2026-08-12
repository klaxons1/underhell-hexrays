int sub_100562F0()
{
  if ( (dword_1040C1C0 & 1) == 0 )
  {
    dword_1040C1C0 |= 1u;
    sub_1009AED0(&unk_1040C148, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040C184, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
  }
  sub_1009AC10(&unk_1040C184, 1, "DT_FuncTrackTrain");
  return 1;
}

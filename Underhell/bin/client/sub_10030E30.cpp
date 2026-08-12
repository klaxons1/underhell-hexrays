int sub_10030E30()
{
  if ( (dword_1040479C & 1) == 0 )
  {
    dword_1040479C |= 1u;
    sub_1009AED0(&unk_104046E8, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_10404724, "baseclass", 0, 0, off_103D7B8C, sub_1009AE70);
    sub_1009AD30(&unk_10404760, "overlay_vars", 0, 0, &unk_1040486C, sub_1009AE70);
  }
  sub_1009AC10(&unk_10404724, 2, "DT_BaseAnimatingOverlay");
  return 1;
}

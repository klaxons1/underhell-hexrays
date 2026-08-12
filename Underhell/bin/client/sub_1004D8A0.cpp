int sub_1004D8A0()
{
  if ( (dword_1040ABFC & 1) == 0 )
  {
    dword_1040ABFC |= 1u;
    sub_1009AED0(&unk_1040AB48, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040AB84, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_10116040(&unk_1040ABC0, "m_hEntAttached", 1196, 4, sub_10116120);
  }
  sub_1009AC10(&unk_1040AB84, 2, "DT_EntityFlame");
  return 1;
}

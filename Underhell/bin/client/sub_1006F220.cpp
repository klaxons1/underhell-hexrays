int sub_1006F220()
{
  if ( (dword_10412364 & 1) == 0 )
  {
    dword_10412364 |= 1u;
    sub_1009AED0(&unk_104122B0, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_104122EC, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AD30(&unk_10412328, "blah", 0, 0, &unk_104121D8, sub_1009AE70);
  }
  sub_1009AC10(&unk_104122EC, 2, "DT_ProxyToggle");
  return 1;
}

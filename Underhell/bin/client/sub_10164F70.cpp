int sub_10164F70()
{
  if ( (dword_10440388 & 1) == 0 )
  {
    dword_10440388 |= 1u;
    sub_1009AED0((int)&unk_10440310, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044034C, (int)"baseclass", 0, 0, (int)off_103E9488, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_104403FC, (int)&unk_1044034C, 1, (int)"DT_TEArmorRicochet");
  return 1;
}

int sub_101A0E50()
{
  if ( (dword_10449F80 & 1) == 0 )
  {
    dword_10449F80 |= 1u;
    sub_1009AED0((int)&unk_10449F08, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10449F44, (int)"baseclass", 0, 0, (int)off_103EA7E4, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BB38, (int)&unk_10449F44, 1, (int)"DT_WeaponBugBait");
  return 1;
}

int sub_101A33D0()
{
  if ( (dword_1044B580 & 1) == 0 )
  {
    dword_1044B580 |= 1u;
    sub_1009AED0((int)&unk_1044B508, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044B544, (int)"baseclass", 0, 0, (int)off_103EA7E4, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BE58, (int)&unk_1044B544, 1, (int)"DT_WeaponCrossbow");
  return 1;
}

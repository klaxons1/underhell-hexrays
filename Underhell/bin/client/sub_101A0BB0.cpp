int sub_101A0BB0()
{
  if ( (dword_10449E20 & 1) == 0 )
  {
    dword_10449E20 |= 1u;
    sub_1009AED0((int)&unk_10449DA8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10449DE4, (int)"baseclass", 0, 0, (int)off_103D65B4, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BB08, (int)&unk_10449DE4, 1, (int)"DT_WeaponCycler");
  return 1;
}

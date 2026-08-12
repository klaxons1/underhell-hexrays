int sub_101A2EF0()
{
  if ( (dword_1044B160 & 1) == 0 )
  {
    dword_1044B160 |= 1u;
    sub_1009AED0((int)&unk_1044B0E8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044B124, (int)"baseclass", 0, 0, (int)off_103EAA18[0], (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BDC4, (int)&unk_1044B124, 1, (int)"DT_WeaponBfgMinigun");
  return 1;
}

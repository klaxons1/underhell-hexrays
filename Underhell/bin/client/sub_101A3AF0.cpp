int sub_101A3AF0()
{
  if ( (dword_1044B9A0 & 1) == 0 )
  {
    dword_1044B9A0 |= 1u;
    sub_1009AED0((int)&unk_1044B928, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044B964, (int)"baseclass", 0, 0, (int)off_103EAA1C, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BEF0, (int)&unk_1044B964, 1, (int)"DT_WeaponWrench");
  return 1;
}

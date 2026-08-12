int sub_101A35B0()
{
  if ( (dword_1044B6E0 & 1) == 0 )
  {
    dword_1044B6E0 |= 1u;
    sub_1009AED0((int)&unk_1044B668, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044B6A4, (int)"baseclass", 0, 0, (int)off_103EAA1C, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BE8C, (int)&unk_1044B6A4, 1, (int)"DT_WeaponCrowbar");
  return 1;
}

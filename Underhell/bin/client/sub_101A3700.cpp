int sub_101A3700()
{
  if ( (dword_1044B790 & 1) == 0 )
  {
    dword_1044B790 |= 1u;
    sub_1009AED0((int)&unk_1044B718, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044B754, (int)"baseclass", 0, 0, (int)off_103EAA1C, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BEA4, (int)&unk_1044B754, 1, (int)"DT_WeaponPipe");
  return 1;
}

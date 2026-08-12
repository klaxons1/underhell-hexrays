int sub_101A2D10()
{
  if ( (dword_1044B000 & 1) == 0 )
  {
    dword_1044B000 |= 1u;
    sub_1009AED0((int)&unk_1044AF88, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044AFC4, (int)"baseclass", 0, 0, (int)off_103EA7E4, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BD90, (int)&unk_1044AFC4, 1, (int)"DT_WeaponSniper");
  return 1;
}

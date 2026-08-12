int sub_101A3850()
{
  if ( (dword_1044B840 & 1) == 0 )
  {
    dword_1044B840 |= 1u;
    sub_1009AED0((int)&unk_1044B7C8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044B804, (int)"baseclass", 0, 0, (int)off_103EAA1C, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BEBC, (int)&unk_1044B804, 1, (int)"DT_WeaponAxe");
  return 1;
}

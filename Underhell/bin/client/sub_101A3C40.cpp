int sub_101A3C40()
{
  if ( (dword_1044BA50 & 1) == 0 )
  {
    dword_1044BA50 |= 1u;
    sub_1009AED0((int)&unk_1044B9D8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044BA14, (int)"baseclass", 0, 0, (int)off_103EAA1C, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BF08, (int)&unk_1044BA14, 1, (int)"DT_WeaponCleaver");
  return 1;
}

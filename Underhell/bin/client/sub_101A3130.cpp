int sub_101A3130()
{
  if ( (dword_1044B420 & 1) == 0 )
  {
    dword_1044B420 |= 1u;
    sub_1009AED0((int)&unk_1044B3A8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044B3E4, (int)"baseclass", 0, 0, (int)off_103EAA18[0], (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BE28, (int)&unk_1044B3E4, 1, (int)"DT_WeaponSMGMP7");
  return 1;
}

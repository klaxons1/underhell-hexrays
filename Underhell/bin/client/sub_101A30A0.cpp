int sub_101A30A0()
{
  if ( (dword_1044B370 & 1) == 0 )
  {
    dword_1044B370 |= 1u;
    sub_1009AED0((int)&unk_1044B2F8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044B334, (int)"baseclass", 0, 0, (int)off_103EAA18[0], (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BE0C, (int)&unk_1044B334, 1, (int)"DT_WeaponSMGMP5EOD");
  return 1;
}

int sub_101A3010()
{
  if ( (dword_1044B2C0 & 1) == 0 )
  {
    dword_1044B2C0 |= 1u;
    sub_1009AED0((int)&unk_1044B248, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044B284, (int)"baseclass", 0, 0, (int)off_103EAA18[0], (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BDF4, (int)&unk_1044B284, 1, (int)"DT_WeaponSMGMP5");
  return 1;
}

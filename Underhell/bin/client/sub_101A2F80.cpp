int sub_101A2F80()
{
  if ( (dword_1044B210 & 1) == 0 )
  {
    dword_1044B210 |= 1u;
    sub_1009AED0((int)&unk_1044B198, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044B1D4, (int)"baseclass", 0, 0, (int)off_103EAA18[0], (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BDDC, (int)&unk_1044B1D4, 1, (int)"DT_WeaponSMG1");
  return 1;
}

int sub_101A27D0()
{
  if ( (dword_1044AD40 & 1) == 0 )
  {
    dword_1044AD40 |= 1u;
    sub_1009AED0((int)&unk_1044ACC8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044AD04, (int)"baseclass", 0, 0, (int)off_103EA7E4, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BD2C, (int)&unk_1044AD04, 1, (int)"DT_WeaponShotgunSpas12");
  return 1;
}

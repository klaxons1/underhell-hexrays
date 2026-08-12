int sub_101A2E60()
{
  if ( (dword_1044B0B0 & 1) == 0 )
  {
    dword_1044B0B0 |= 1u;
    sub_1009AED0((int)&unk_1044B038, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044B074, (int)"baseclass", 0, 0, (int)off_103EA7E4, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BDA8, (int)&unk_1044B074, 1, (int)"DT_WeaponBfgMgl");
  return 1;
}

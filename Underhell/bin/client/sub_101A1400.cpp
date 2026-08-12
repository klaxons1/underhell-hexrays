int sub_101A1400()
{
  if ( (dword_1044A2F0 & 1) == 0 )
  {
    dword_1044A2F0 |= 1u;
    sub_1009AED0((int)&unk_1044A278, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044A2B4, (int)"baseclass", 0, 0, (int)off_103EAA18[0], (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BBB4, (int)&unk_1044A2B4, 1, (int)"DT_WeaponAlyxGun");
  return 1;
}

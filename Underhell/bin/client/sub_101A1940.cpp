int sub_101A1940()
{
  if ( (dword_1044A5B0 & 1) == 0 )
  {
    dword_1044A5B0 |= 1u;
    sub_1009AED0((int)&unk_1044A538, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044A574, (int)"baseclass", 0, 0, (int)off_103EAA14, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BC18, (int)&unk_1044A574, 1, (int)"DT_WeaponAR2");
  return 1;
}

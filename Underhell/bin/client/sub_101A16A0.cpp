int sub_101A16A0()
{
  if ( (dword_1044A450 & 1) == 0 )
  {
    dword_1044A450 |= 1u;
    sub_1009AED0((int)&unk_1044A3D8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044A414, (int)"baseclass", 0, 0, (int)off_103EBA40, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BBE8, (int)&unk_1044A414, 1, (int)"DT_WeaponCitizenSuitcase");
  return 1;
}

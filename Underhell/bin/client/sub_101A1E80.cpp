int sub_101A1E80()
{
  if ( (dword_1044A870 & 1) == 0 )
  {
    dword_1044A870 |= 1u;
    sub_1009AED0((int)&unk_1044A7F8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044A834, (int)"baseclass", 0, 0, (int)off_103EA7E4, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BC7C, (int)&unk_1044A834, 1, (int)"DT_WeaponPistol");
  return 1;
}

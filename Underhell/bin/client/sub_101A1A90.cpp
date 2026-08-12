int sub_101A1A90()
{
  if ( (dword_1044A660 & 1) == 0 )
  {
    dword_1044A660 |= 1u;
    sub_1009AED0((int)&unk_1044A5E8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044A624, (int)"baseclass", 0, 0, (int)off_103EAA14, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BC34, (int)&unk_1044A624, 1, (int)"DT_WeaponG36K");
  return 1;
}

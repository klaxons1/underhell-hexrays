int sub_101A1370()
{
  if ( (dword_1044A240 & 1) == 0 )
  {
    dword_1044A240 |= 1u;
    sub_1009AED0((int)&unk_1044A1C8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044A204, (int)"baseclass", 0, 0, (int)off_103D65B4, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BB9C, (int)&unk_1044A204, 1, (int)"DT_WeaponCubemap");
  return 1;
}

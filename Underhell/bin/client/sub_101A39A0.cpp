int sub_101A39A0()
{
  if ( (dword_1044B8F0 & 1) == 0 )
  {
    dword_1044B8F0 |= 1u;
    sub_1009AED0((int)&unk_1044B878, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044B8B4, (int)"baseclass", 0, 0, (int)off_103EAA1C, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BED4, (int)&unk_1044B8B4, 1, (int)"DT_WeaponBaton");
  return 1;
}

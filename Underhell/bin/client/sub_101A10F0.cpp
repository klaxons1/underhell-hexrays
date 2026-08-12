int sub_101A10F0()
{
  if ( (dword_1044A0E0 & 1) == 0 )
  {
    dword_1044A0E0 |= 1u;
    sub_1009AED0((int)&unk_1044A068, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044A0A4, (int)"baseclass", 0, 0, (int)off_103EA7E4, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BB6C, (int)&unk_1044A0A4, 1, (int)"DT_WeaponAnnabelle");
  return 1;
}

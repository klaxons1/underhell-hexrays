int sub_101A2290()
{
  if ( (dword_1044AA80 & 1) == 0 )
  {
    dword_1044AA80 |= 1u;
    sub_1009AED0((int)&unk_1044AA08, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044AA44, (int)"baseclass", 0, 0, (int)off_103EA7E4, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BCC8, (int)&unk_1044AA44, 1, (int)"DT_WeaponPistolBeretta");
  return 1;
}

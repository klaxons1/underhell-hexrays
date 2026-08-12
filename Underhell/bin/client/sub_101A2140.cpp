int sub_101A2140()
{
  if ( (dword_1044A9D0 & 1) == 0 )
  {
    dword_1044A9D0 |= 1u;
    sub_1009AED0((int)&unk_1044A958, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044A994, (int)"baseclass", 0, 0, (int)off_103EA7E4, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BCB0, (int)&unk_1044A994, 1, (int)"DT_WeaponPistolSocom");
  return 1;
}

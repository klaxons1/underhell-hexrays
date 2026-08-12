int sub_101A17F0()
{
  if ( (dword_1044A500 & 1) == 0 )
  {
    dword_1044A500 |= 1u;
    sub_1009AED0((int)&unk_1044A488, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044A4C4, (int)"baseclass", 0, 0, (int)off_103EA7E4, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BC00, (int)&unk_1044A4C4, 1, (int)"DT_WeaponKick");
  return 1;
}

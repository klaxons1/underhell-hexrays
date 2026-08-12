int sub_101A2BC0()
{
  if ( (dword_1044AF50 & 1) == 0 )
  {
    dword_1044AF50 |= 1u;
    sub_1009AED0((int)&unk_1044AED8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044AF14, (int)"baseclass", 0, 0, (int)off_103EA7E4, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BD78, (int)&unk_1044AF14, 1, (int)"DT_WeaponShotgunXM1014");
  return 1;
}

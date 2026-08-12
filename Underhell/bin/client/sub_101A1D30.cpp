int sub_101A1D30()
{
  if ( (dword_1044A7C0 & 1) == 0 )
  {
    dword_1044A7C0 |= 1u;
    sub_1009AED0((int)&unk_1044A748, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044A784, (int)"baseclass", 0, 0, (int)off_103EA7E4, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BC64, (int)&unk_1044A784, 1, (int)"DT_WeaponRPG");
  return 1;
}

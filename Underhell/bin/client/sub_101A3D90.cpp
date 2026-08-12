int sub_101A3D90()
{
  if ( (dword_1044BB00 & 1) == 0 )
  {
    dword_1044BB00 |= 1u;
    sub_1009AED0((int)&unk_1044BA88, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044BAC4, (int)"baseclass", 0, 0, (int)off_103EA7E4, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BF20, (int)&unk_1044BAC4, 1, (int)"DT_WeaponHopwire");
  return 1;
}

int sub_101A0D00()
{
  if ( (dword_10449ED0 & 1) == 0 )
  {
    dword_10449ED0 |= 1u;
    sub_1009AED0((int)&unk_10449E58, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10449E94, (int)"baseclass", 0, 0, (int)off_103EA7E4, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BB20, (int)&unk_10449E94, 1, (int)"DT_WeaponBinoculars");
  return 1;
}

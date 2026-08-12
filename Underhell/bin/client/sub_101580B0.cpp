int sub_101580B0()
{
  if ( (dword_1043E1A8 & 1) == 0 )
  {
    dword_1043E1A8 |= 1u;
    sub_1009AED0((int)&unk_1043E130, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1043E16C, (int)"baseclass", 0, 0, (int)off_103D7044, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1043E1AC, (int)&unk_1043E16C, 1, (int)"DT_MovieExplosion");
  return 1;
}

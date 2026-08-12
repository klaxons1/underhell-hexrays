int sub_101237B0()
{
  if ( (dword_10437B00 & 1) == 0 )
  {
    dword_10437B00 |= 1u;
    sub_1009AED0((int)&unk_10437A88, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10437AC4, (int)"baseclass", 0, 0, (int)off_103E6038, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_10437E44, (int)&unk_10437AC4, 1, (int)"DT_SpriteOriented");
  return 1;
}

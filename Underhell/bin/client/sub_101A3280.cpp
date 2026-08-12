int sub_101A3280()
{
  if ( (dword_1044B4D0 & 1) == 0 )
  {
    dword_1044B4D0 |= 1u;
    sub_1009AED0((int)&unk_1044B458, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044B494, (int)"baseclass", 0, 0, (int)off_103EA7E4, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BE40, (int)&unk_1044B494, 1, (int)"DT_Weapon357");
  return 1;
}

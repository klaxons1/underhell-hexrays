int sub_101A47A0()
{
  if ( (dword_1044C050 & 1) == 0 )
  {
    dword_1044C050 |= 1u;
    sub_1009AED0((int)&unk_1044BFD8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044C014, (int)"baseclass", 0, 0, (int)off_103D6E00, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044C054, (int)&unk_1044C014, 1, (int)"DT_GrenadeHopwire");
  return 1;
}

int sub_10129110()
{
  if ( (dword_1043834C & 1) == 0 )
  {
    dword_1043834C |= 1u;
    sub_1009AED0((int)&unk_10438298, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_104382D4, (int)"baseclass", 0, 0, (int)off_103E0698, (int)sub_1009AE70);
    sub_1009AD30(
      (int)&unk_10438310,
      (int)"teamplayroundbased_gamerules_data",
      0,
      0,
      (int)&unk_104386A0,
      (int)sub_101290E0);
  }
  sub_1009AC10(dword_104386B8, (int)&unk_104382D4, 2, (int)"DT_TeamplayRoundBasedRulesProxy");
  return 1;
}

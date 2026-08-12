int sub_101B9930()
{
  if ( (dword_1044F164 & 1) == 0 )
  {
    dword_1044F164 |= 1u;
    sub_1009AED0((int)&unk_1044F0B0, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044F0EC, (int)"baseclass", 0, 0, (int)off_103E0698, (int)sub_1009AE70);
    sub_1009AD30((int)&unk_1044F128, (int)"hl2_survival_gamerules_data", 0, 0, (int)&unk_1044F1BC, (int)sub_101B9920);
  }
  sub_1009AC10(dword_1044F1D8, (int)&unk_1044F0EC, 2, (int)"DT_HalfLife2SurvivalProxy");
  return 1;
}

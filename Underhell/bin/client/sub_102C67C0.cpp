int sub_102C67C0()
{
  int result; // eax

  if ( (dword_1044F0A8 & 1) == 0 )
  {
    dword_1044F0A8 |= 1u;
    sub_1009AED0((int)&unk_1044F06C, (int)"should_never_see_this", 0, 4, 0, 0);
  }
  result = sub_1009AC10(dword_1044F1BC, (int)&dword_1044F0A8, 0, (int)"DT_HL2SurvivalGameRules");
  dword_1044F1D0 = 1;
  return result;
}

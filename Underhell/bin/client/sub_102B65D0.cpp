int sub_102B65D0()
{
  int result; // eax

  if ( (dword_1042EA44 & 1) == 0 )
  {
    dword_1042EA44 |= 1u;
    sub_1009AED0((int)&unk_1042EA08, (int)"should_never_see_this", 0, 4, 0, 0);
  }
  result = sub_1009AC10(dword_1042E8AC, (int)&dword_1042EA44, 0, (int)"DT_GameRulesProxy");
  dword_1042E9BC = 1;
  return result;
}

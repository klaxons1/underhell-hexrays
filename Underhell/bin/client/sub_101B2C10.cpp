int sub_101B2C10()
{
  int result; // eax

  if ( (dword_1044EE08 & 1) != 0 )
    return dword_1044EE04;
  dword_1044EE08 |= 1u;
  result = sub_10242580("CHudPoisonDamageIndicator");
  dword_1044EE04 = result;
  return result;
}

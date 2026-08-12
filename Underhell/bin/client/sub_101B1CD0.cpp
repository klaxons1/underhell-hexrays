int sub_101B1CD0()
{
  int result; // eax

  if ( (dword_1044ED34 & 1) != 0 )
    return dword_1044ED30;
  dword_1044ED34 |= 1u;
  result = sub_10242580("CHudHealth");
  dword_1044ED30 = result;
  return result;
}

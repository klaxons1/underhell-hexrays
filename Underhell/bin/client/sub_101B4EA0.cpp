int sub_101B4EA0()
{
  int result; // eax

  if ( (dword_1044EF34 & 1) != 0 )
    return dword_1044EF30;
  dword_1044EF34 |= 1u;
  result = sub_10242580("CHudSquadStatus");
  dword_1044EF30 = result;
  return result;
}

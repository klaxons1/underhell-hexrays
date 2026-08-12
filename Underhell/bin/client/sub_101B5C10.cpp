int sub_101B5C10()
{
  int result; // eax

  if ( (dword_1044EFA4 & 1) != 0 )
    return dword_1044EFA0;
  dword_1044EFA4 |= 1u;
  result = sub_10242540("CHudSuitPower");
  dword_1044EFA0 = result;
  return result;
}

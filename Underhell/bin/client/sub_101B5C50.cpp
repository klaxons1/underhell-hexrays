int sub_101B5C50()
{
  int result; // eax

  if ( (dword_1044EFAC & 1) != 0 )
    return dword_1044EFA8;
  dword_1044EFAC |= 1u;
  result = sub_10242580("CHudSuitPower");
  dword_1044EFA8 = result;
  return result;
}

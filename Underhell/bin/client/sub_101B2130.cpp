int sub_101B2130()
{
  int result; // eax

  if ( (dword_1044ED4C & 1) != 0 )
    return dword_1044ED48;
  dword_1044ED4C |= 1u;
  result = sub_10242540("CHudLocator");
  dword_1044ED48 = result;
  return result;
}

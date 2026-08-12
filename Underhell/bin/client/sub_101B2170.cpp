int sub_101B2170()
{
  int result; // eax

  if ( (dword_1044ED54 & 1) != 0 )
    return dword_1044ED50;
  dword_1044ED54 |= 1u;
  result = sub_10242580("CHudLocator");
  dword_1044ED50 = result;
  return result;
}

int sub_101B1C90()
{
  int result; // eax

  if ( (dword_1044ED2C & 1) != 0 )
    return dword_1044ED28;
  dword_1044ED2C |= 1u;
  result = sub_10242540("CHudHealth");
  dword_1044ED28 = result;
  return result;
}

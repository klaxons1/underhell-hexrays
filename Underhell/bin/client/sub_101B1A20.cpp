int sub_101B1A20()
{
  int result; // eax

  if ( (dword_1044ED14 & 1) != 0 )
    return dword_1044ED10;
  dword_1044ED14 |= 1u;
  result = sub_10242580("CHudFlashlight");
  dword_1044ED10 = result;
  return result;
}

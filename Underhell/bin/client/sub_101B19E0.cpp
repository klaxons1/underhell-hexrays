int sub_101B19E0()
{
  int result; // eax

  if ( (dword_1044ED0C & 1) != 0 )
    return dword_1044ED08;
  dword_1044ED0C |= 1u;
  result = sub_10242540("CHudFlashlight");
  dword_1044ED08 = result;
  return result;
}

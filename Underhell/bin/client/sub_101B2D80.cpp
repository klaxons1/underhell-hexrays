int sub_101B2D80()
{
  int result; // eax

  if ( (dword_1044EE20 & 1) != 0 )
    return dword_1044EE1C;
  dword_1044EE20 |= 1u;
  result = sub_10242540("CHudPosture");
  dword_1044EE1C = result;
  return result;
}

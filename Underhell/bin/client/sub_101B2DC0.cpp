int sub_101B2DC0()
{
  int result; // eax

  if ( (dword_1044EE28 & 1) != 0 )
    return dword_1044EE24;
  dword_1044EE28 |= 1u;
  result = sub_10242580("CHudPosture");
  dword_1044EE24 = result;
  return result;
}

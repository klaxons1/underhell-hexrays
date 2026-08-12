int sub_101B2BD0()
{
  int result; // eax

  if ( (dword_1044EE00 & 1) != 0 )
    return dword_1044EDFC;
  dword_1044EE00 |= 1u;
  result = sub_10242540("CHudPoisonDamageIndicator");
  dword_1044EDFC = result;
  return result;
}

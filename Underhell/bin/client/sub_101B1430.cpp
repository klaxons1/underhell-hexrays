int sub_101B1430()
{
  int result; // eax

  if ( (dword_1044ECEC & 1) != 0 )
    return dword_1044ECE8;
  dword_1044ECEC |= 1u;
  result = sub_10242580("CHudDamageIndicator");
  dword_1044ECE8 = result;
  return result;
}

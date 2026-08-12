int sub_101B13F0()
{
  int result; // eax

  if ( (dword_1044ECE4 & 1) != 0 )
    return dword_1044ECE0;
  dword_1044ECE4 |= 1u;
  result = sub_10242540("CHudDamageIndicator");
  dword_1044ECE0 = result;
  return result;
}

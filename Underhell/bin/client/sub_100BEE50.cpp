int sub_100BEE50()
{
  int result; // eax

  if ( (dword_1043012C & 1) != 0 )
    return dword_10430128;
  dword_1043012C |= 1u;
  result = sub_10242540("CHudChat");
  dword_10430128 = result;
  return result;
}

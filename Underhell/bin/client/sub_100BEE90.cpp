int sub_100BEE90()
{
  int result; // eax

  if ( (dword_10430134 & 1) != 0 )
    return dword_10430130;
  dword_10430134 |= 1u;
  result = sub_10242580("CHudChat");
  dword_10430130 = result;
  return result;
}

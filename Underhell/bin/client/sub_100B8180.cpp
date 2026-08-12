int sub_100B8180()
{
  int result; // eax

  if ( (dword_1042FC30 & 1) != 0 )
    return dword_1042FC2C;
  dword_1042FC30 |= 1u;
  result = sub_10242540("CHudAnimationInfo");
  dword_1042FC2C = result;
  return result;
}

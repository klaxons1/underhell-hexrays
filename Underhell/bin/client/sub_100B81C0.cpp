int sub_100B81C0()
{
  int result; // eax

  if ( (dword_1042FC38 & 1) != 0 )
    return dword_1042FC34;
  dword_1042FC38 |= 1u;
  result = sub_10242580("CHudAnimationInfo");
  dword_1042FC34 = result;
  return result;
}

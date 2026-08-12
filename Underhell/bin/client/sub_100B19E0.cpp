int sub_100B19E0()
{
  int result; // eax

  if ( (dword_1042F980 & 1) != 0 )
    return dword_1042F97C;
  dword_1042F980 |= 1u;
  result = sub_10242580("CHudHistoryResource");
  dword_1042F97C = result;
  return result;
}

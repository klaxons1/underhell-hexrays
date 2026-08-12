int sub_100B9290()
{
  int result; // eax

  if ( (dword_1042FF20 & 1) != 0 )
    return dword_1042FF1C;
  dword_1042FF20 |= 1u;
  result = sub_10242580("Panel");
  dword_1042FF1C = result;
  return result;
}

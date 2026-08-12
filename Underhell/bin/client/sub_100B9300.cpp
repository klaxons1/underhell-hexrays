int sub_100B9300()
{
  int result; // eax

  if ( (dword_1042FF30 & 1) != 0 )
    return dword_1042FF2C;
  dword_1042FF30 |= 1u;
  result = sub_10242580("TextEntry");
  dword_1042FF2C = result;
  return result;
}

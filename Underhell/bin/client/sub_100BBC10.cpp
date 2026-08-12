int sub_100BBC10()
{
  int result; // eax

  if ( (dword_1042FF80 & 1) != 0 )
    return dword_1042FF7C;
  dword_1042FF80 |= 1u;
  result = sub_10242580("RichText");
  dword_1042FF7C = result;
  return result;
}

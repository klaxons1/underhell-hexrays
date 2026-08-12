int sub_100B9470()
{
  int result; // eax

  if ( (dword_1042FF48 & 1) != 0 )
    return dword_1042FF44;
  dword_1042FF48 |= 1u;
  result = sub_10242540("CHudChatFilterButton");
  dword_1042FF44 = result;
  return result;
}

int sub_100B98F0()
{
  int result; // eax

  if ( (dword_1042FF70 & 1) != 0 )
    return dword_1042FF6C;
  dword_1042FF70 |= 1u;
  result = sub_10242580("CHudChatHistory");
  dword_1042FF6C = result;
  return result;
}

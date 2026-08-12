int sub_100BBF90()
{
  int result; // eax

  if ( (dword_1042FF94 & 1) != 0 )
    return dword_1042FF90;
  dword_1042FF94 |= 1u;
  result = sub_10242580("CHudChatFilterPanel");
  dword_1042FF90 = result;
  return result;
}

int sub_100BBF50()
{
  int result; // eax

  if ( (dword_1042FF8C & 1) != 0 )
    return dword_1042FF88;
  dword_1042FF8C |= 1u;
  result = sub_10242540("CHudChatFilterPanel");
  dword_1042FF88 = result;
  return result;
}

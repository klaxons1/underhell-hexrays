int sub_100B9600()
{
  int result; // eax

  if ( (dword_1042FF60 & 1) != 0 )
    return dword_1042FF5C;
  dword_1042FF60 |= 1u;
  result = sub_10242580("CHudChatFilterCheckButton");
  dword_1042FF5C = result;
  return result;
}

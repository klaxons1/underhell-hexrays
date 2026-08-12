int sub_100B94B0()
{
  int result; // eax

  if ( (dword_1042FF50 & 1) != 0 )
    return dword_1042FF4C;
  dword_1042FF50 |= 1u;
  result = sub_10242580("CHudChatFilterButton");
  dword_1042FF4C = result;
  return result;
}

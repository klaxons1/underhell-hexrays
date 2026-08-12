int sub_100B95C0()
{
  int result; // eax

  if ( (dword_1042FF58 & 1) != 0 )
    return dword_1042FF54;
  dword_1042FF58 |= 1u;
  result = sub_10242540("CHudChatFilterCheckButton");
  dword_1042FF54 = result;
  return result;
}

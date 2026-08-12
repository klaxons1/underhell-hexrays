int sub_100B98B0()
{
  int result; // eax

  if ( (dword_1042FF68 & 1) != 0 )
    return dword_1042FF64;
  dword_1042FF68 |= 1u;
  result = sub_10242540("CHudChatHistory");
  dword_1042FF64 = result;
  return result;
}

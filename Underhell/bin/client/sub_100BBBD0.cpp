int sub_100BBBD0()
{
  int result; // eax

  if ( (dword_1042FF78 & 1) != 0 )
    return dword_1042FF74;
  dword_1042FF78 |= 1u;
  result = sub_10242540("RichText");
  dword_1042FF74 = result;
  return result;
}

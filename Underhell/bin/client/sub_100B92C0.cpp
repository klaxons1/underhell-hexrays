int sub_100B92C0()
{
  int result; // eax

  if ( (dword_1042FF28 & 1) != 0 )
    return dword_1042FF24;
  dword_1042FF28 |= 1u;
  result = sub_10242540("TextEntry");
  dword_1042FF24 = result;
  return result;
}

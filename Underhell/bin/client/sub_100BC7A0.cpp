int sub_100BC7A0()
{
  int result; // eax

  if ( (dword_1042FF9C & 1) != 0 )
    return dword_1042FF98;
  dword_1042FF9C |= 1u;
  result = sub_10242540("CBaseHudChat");
  dword_1042FF98 = result;
  return result;
}

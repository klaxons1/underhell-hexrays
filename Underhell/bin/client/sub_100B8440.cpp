int sub_100B8440()
{
  int result; // eax

  if ( (dword_1042FC74 & 1) != 0 )
    return dword_1042FC70;
  dword_1042FC74 |= 1u;
  result = sub_10242540("CHUDAutoAim");
  dword_1042FC70 = result;
  return result;
}

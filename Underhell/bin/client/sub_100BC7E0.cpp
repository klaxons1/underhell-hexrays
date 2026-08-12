int sub_100BC7E0()
{
  int result; // eax

  if ( (dword_1042FFA4 & 1) != 0 )
    return dword_1042FFA0;
  dword_1042FFA4 |= 1u;
  result = sub_10242580("CBaseHudChat");
  dword_1042FFA0 = result;
  return result;
}
